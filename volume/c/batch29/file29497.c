// fichero 29497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29497;

Registro29497 crear_registro29497(int id) {
    Registro29497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29497(Registro29497 r) {
    return r.valor + r.id;
}
