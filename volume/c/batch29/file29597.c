// fichero 29597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29597;

Registro29597 crear_registro29597(int id) {
    Registro29597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29597(Registro29597 r) {
    return r.valor + r.id;
}
