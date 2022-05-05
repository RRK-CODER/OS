echo "Enter file name"
read fname
if [ -f $fname ]
then 
echo $fname is a regular file
else
echo "not a file"
fi