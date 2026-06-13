// fichero 29421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29421;

Registro29421 crear_registro29421(int id) {
    Registro29421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29421(Registro29421 r) {
    return r.valor + r.id;
}
