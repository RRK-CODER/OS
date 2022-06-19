echo "Enter file name "
read filename
if [ -f $fname ]
then 
echo $fname is a regular file 
else
echo "Not a file"
fi
