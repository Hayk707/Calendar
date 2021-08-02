ll:
	mkdir bin 
	cd src/ && make
	cd src/ && make clean
clean:
	rm -r bin
run:
	cd bin && ./cal
