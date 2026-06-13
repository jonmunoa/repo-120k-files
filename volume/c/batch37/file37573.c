// fichero 37573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37573;

Registro37573 crear_registro37573(int id) {
    Registro37573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37573(Registro37573 r) {
    return r.valor + r.id;
}
