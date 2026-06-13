// fichero 42973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42973;

Registro42973 crear_registro42973(int id) {
    Registro42973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42973(Registro42973 r) {
    return r.valor + r.id;
}
