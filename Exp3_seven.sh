echo "Enter a directory name"
read dir
if [ -d $dir ]
then 
echo "it is a directory"
cd $dir
ls -l
else 
echo "not a directory"
fi