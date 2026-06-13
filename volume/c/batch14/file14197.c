// fichero 14197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14197;

Registro14197 crear_registro14197(int id) {
    Registro14197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14197(Registro14197 r) {
    return r.valor + r.id;
}
