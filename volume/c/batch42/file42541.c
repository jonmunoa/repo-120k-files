// fichero 42541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42541;

Registro42541 crear_registro42541(int id) {
    Registro42541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42541(Registro42541 r) {
    return r.valor + r.id;
}
