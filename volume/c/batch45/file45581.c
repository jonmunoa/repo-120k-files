// fichero 45581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45581;

Registro45581 crear_registro45581(int id) {
    Registro45581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45581(Registro45581 r) {
    return r.valor + r.id;
}
