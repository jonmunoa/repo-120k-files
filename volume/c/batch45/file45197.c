// fichero 45197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45197;

Registro45197 crear_registro45197(int id) {
    Registro45197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45197(Registro45197 r) {
    return r.valor + r.id;
}
