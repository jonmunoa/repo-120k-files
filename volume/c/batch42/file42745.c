// fichero 42745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42745;

Registro42745 crear_registro42745(int id) {
    Registro42745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42745(Registro42745 r) {
    return r.valor + r.id;
}
