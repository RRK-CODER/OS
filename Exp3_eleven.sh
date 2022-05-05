echo "Enter a name a directory "
read fname
if [ -d fname ]
then
echo "$filename is a directory"
for fname in *
do if [ -r $fname -a-w $fname ]
then
echo "$fname"
fi
done
else
echo "$fname is not a directory"
fi