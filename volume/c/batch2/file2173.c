// fichero 2173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2173;

Registro2173 crear_registro2173(int id) {
    Registro2173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2173(Registro2173 r) {
    return r.valor + r.id;
}
