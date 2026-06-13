// fichero 42081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42081;

Registro42081 crear_registro42081(int id) {
    Registro42081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42081(Registro42081 r) {
    return r.valor + r.id;
}
