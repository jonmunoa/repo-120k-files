// fichero 42413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42413;

Registro42413 crear_registro42413(int id) {
    Registro42413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42413(Registro42413 r) {
    return r.valor + r.id;
}
