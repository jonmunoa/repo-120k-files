// fichero 42757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42757;

Registro42757 crear_registro42757(int id) {
    Registro42757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42757(Registro42757 r) {
    return r.valor + r.id;
}
