// fichero 29793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29793;

Registro29793 crear_registro29793(int id) {
    Registro29793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29793(Registro29793 r) {
    return r.valor + r.id;
}
