FILE=/home/schwi/Documents/c_project/c_environment/
if [ -f "enumerate_numbers" ]; then
	rm "enumerate_numbers"
else
	echo "$FILE does not exist."
fi
