# Variables are defined by:
# Name = Value
BEGIN { 
  FS = "[ \t]*=[ \t]*" 
  j = 0 
}

/#/ { next }
{ # For every empty line
  if ($1 != "") {
    # Expand variables
    gsub("\${([A-Z]*)}", vars["&"])

    vars[$1] = $2;
  }
}

# Print out
END { 
  for ( i in vars ) print "s:<%%"i"%%>:"vars[i]":g" 
}
