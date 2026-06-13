// fichero 29937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29937;

Registro29937 crear_registro29937(int id) {
    Registro29937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29937(Registro29937 r) {
    return r.valor + r.id;
}
