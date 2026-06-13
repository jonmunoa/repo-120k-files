// fichero 42265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42265;

Registro42265 crear_registro42265(int id) {
    Registro42265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42265(Registro42265 r) {
    return r.valor + r.id;
}
