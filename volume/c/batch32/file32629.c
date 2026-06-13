// fichero 32629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32629;

Registro32629 crear_registro32629(int id) {
    Registro32629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32629(Registro32629 r) {
    return r.valor + r.id;
}
