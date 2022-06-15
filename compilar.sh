# compilar
echo Compilando...
g++ -c empleado.cpp -o empleado.o
g++ -c administrativo.cpp -o administrativo.o
g++ -c profesional.cpp -o profesional.o
g++ -c cuenta.cpp -o cuenta.o
g++ -c main.cpp -o main.o
g++ -c lista.cpp -o lista.o
g++ -c tarjeta_credito.cpp -o tarjeta_credito.o



#linkear
echo Linkeando...
g++ main.o empleado.o administrativo.o profesional.o cuenta.o lista.o tarjeta_credito.o -o sistema

echo Listo!

#limpiar
rm *.o

