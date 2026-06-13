// fichero 42185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42185;

Registro42185 crear_registro42185(int id) {
    Registro42185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42185(Registro42185 r) {
    return r.valor + r.id;
}
