// fichero 42201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42201;

Registro42201 crear_registro42201(int id) {
    Registro42201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42201(Registro42201 r) {
    return r.valor + r.id;
}
