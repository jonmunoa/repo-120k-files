// fichero 32381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32381;

Registro32381 crear_registro32381(int id) {
    Registro32381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32381(Registro32381 r) {
    return r.valor + r.id;
}
