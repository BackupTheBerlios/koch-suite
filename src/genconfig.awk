# Variables are defined by:
# Name = Value
BEGIN { FS = "[ \t]*=[ \t]*" }

/#/ { next }

{ # For every non-empty line
  if ($1 != "") {

    name  = $1
    value = $2

    # Expand variables
    if (match(value, "\${([A-Za-z0-9_]+)}")) {
      v = substr(value, RSTART+2, RLENGTH-3)
      gsub("\${"v"}", vars[v], $2)
      if ( name == v ) { 
        printf "*** Recursive definition of '%s'\n", name > "/dev/stderr"
        exit 2
      }
    }

    # Store the value for future expansions
    vars[$1] = $2

    # Print output
    print "s:<%%"$1"%%>:"vars[$1]":g" 
  }
}
