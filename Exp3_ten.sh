echo "Enter a directory "
read dir
if [ -d $dir ]
then 
cd $dir
for file in *
do 
if [ -f $file ]
then 
echo $file
chmod 77- $file
fi 
done
ls -l
fi