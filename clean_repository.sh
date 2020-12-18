FILE=/home/schwi/Documents/c_project/c_environment/
if [ -f "main.out" ]; then
	rm "main.out"
else
	echo "$FILE does not exist."
fi
