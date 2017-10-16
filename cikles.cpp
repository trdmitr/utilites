for file in *.jpg
  do
    outfile=`basename $file .jpg`.tiff
    echo convert -verbose "'$file'" -rotate 90 \
    +profile "'*'" "'$outfile'"
  done | gm batch -echo on -feedback on -
