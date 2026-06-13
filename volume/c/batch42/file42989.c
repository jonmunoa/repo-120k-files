// fichero 42989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42989;

Registro42989 crear_registro42989(int id) {
    Registro42989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42989(Registro42989 r) {
    return r.valor + r.id;
}
