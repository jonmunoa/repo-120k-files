// fichero 37401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37401;

Registro37401 crear_registro37401(int id) {
    Registro37401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37401(Registro37401 r) {
    return r.valor + r.id;
}
