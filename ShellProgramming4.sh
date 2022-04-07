echo "List of all files which have read permission"
for file in *
do if [ -r $file ]
then 
echo $file
fi
done
