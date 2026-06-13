// fichero 29189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29189;

Registro29189 crear_registro29189(int id) {
    Registro29189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29189(Registro29189 r) {
    return r.valor + r.id;
}
