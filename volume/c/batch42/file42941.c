// fichero 42941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42941;

Registro42941 crear_registro42941(int id) {
    Registro42941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42941(Registro42941 r) {
    return r.valor + r.id;
}
