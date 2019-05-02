all: temperaturas.dat calor.png 

%.png: %.dat calor.png
	python ejercicio28.py

%.dat: a.out
	./a.out

a.out: ejercicio28.cpp
	g++ ejercicio28.cpp

clean:
	rm -rf *.x *.dat *.png
    
    