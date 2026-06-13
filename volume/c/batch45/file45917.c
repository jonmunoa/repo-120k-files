// fichero 45917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45917;

Registro45917 crear_registro45917(int id) {
    Registro45917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45917(Registro45917 r) {
    return r.valor + r.id;
}
