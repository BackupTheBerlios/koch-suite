# $Id: genconfig.awk,v 1.6 2001/10/18 10:06:32 lestinsky Exp $
# Parse 'config' and generate the sedscript which performs the
# replacements.

# Variables are defined by:
# Name = Value
BEGIN { FS = "[ \t]*=[ \t]*" }

/#/ { gsub(/[ \t]*#.*$/, "") }

{ # For every non-empty line
  if ($1 != "") {

    name  = $1
    value = $2

    # Expand variables
    while (match(value, /\${([A-Za-z0-9_]+)}/)) {
      v = substr(value, RSTART+2, RLENGTH-3)

      if ( name == v ) { 
        printf "*** Recursive definition of '%s'\n", name > "/dev/stderr"
        exit 2
      } else {
        if (RSTART > 1) 
          start = substr(value, 1, RSTART -1) 
        else start = ""
        if (length(value) > RSTART + RLENGTH)
          end = substr(value, RSTART+RLENGTH)
        else end = ""
        value = start vars[v] end
      }
    }

    # Store the value for future expansions
    vars[name] = value

    # Print output
    print "s:<%%"name"%%>:"vars[name]":g" 
  }
}
