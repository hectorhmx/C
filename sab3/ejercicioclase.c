#include <stdio.h>
#include <stdlib.h>

typedef struct Libro{
    char* titulo;
    char* ISBN;
    double costo;
    int ventas;
}_libro;

_libro* vender(_libro* libro);
void print_libro(_libro libro);

int main(){
    _libro libro_1, libro_2;

    libro_1.titulo = "Cronica del pajaro que da cuerda al mundo.";
    libro_1.ISBN = "ISBN01921";
    libro_1.costo = 100.05;
    libro_1.ventas = 0;

    // Sintaxis C99
    libro_2 = (_libro){.titulo = "Norwegian Wood", .ISBN = "ISBN192321F", .costo = 100.0, .ventas = 0};

    print_libro(libro_1);
    vender(&libro_1);
    print_libro(libro_1);

    print_libro(libro_2);
    vender(&libro_2);
    print_libro(libro_2);

    return EXIT_SUCCESS; 
}

void print_libro(_libro libro){
    printf("Titulo: %s\n", libro.titulo);
    printf("ISBN: %s\n", libro.ISBN);
    printf("costo: %.2f\n", libro.costo);
    printf("ventas: %i\n", libro.ventas);

    return;
}

_libro* vender(_libro* libro){
    libro -> ventas += 1;

    return libro;
}