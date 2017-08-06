find ./ -name "*.sh" -print | rev | cut -d / -f 1 | cut -c 4- | rev
