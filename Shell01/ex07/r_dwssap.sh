cat /etc/passwd | grep -v "#" | sed -n 'n;p'| rev | sed -e 's/^.*://' | sort -r | head -$FT_LINE2 | tail +$FT_LINE1 | tr '\n' ' ' | sed 's/ /, /g' | rev | sed -n 's/,/./p' | sed 's/ //' | rev | tr -d '\n'
