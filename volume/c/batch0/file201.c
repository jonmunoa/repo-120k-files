// fichero 201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro201;

Registro201 crear_registro201(int id) {
    Registro201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro201(Registro201 r) {
    return r.valor + r.id;
}
