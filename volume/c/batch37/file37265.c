// fichero 37265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37265;

Registro37265 crear_registro37265(int id) {
    Registro37265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37265(Registro37265 r) {
    return r.valor + r.id;
}
