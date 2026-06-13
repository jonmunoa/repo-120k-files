// fichero 42177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42177;

Registro42177 crear_registro42177(int id) {
    Registro42177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42177(Registro42177 r) {
    return r.valor + r.id;
}
