rm -rf  ../output/u1/a.txt
mv ../output/u1/u2/b.txt ../output/u1/u3/
mv ../output/u1/u2/c.txt ../output/u1/u3/ 
echo "u1/u3:b.txt $(more ../output/u1/u3/b.txt)"
echo "u1/u3:c.txt $(more ../output/u1/u3/c.txt)"

