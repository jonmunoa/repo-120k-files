// fichero 29813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29813;

Registro29813 crear_registro29813(int id) {
    Registro29813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29813(Registro29813 r) {
    return r.valor + r.id;
}
