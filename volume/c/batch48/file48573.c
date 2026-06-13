// fichero 48573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48573;

Registro48573 crear_registro48573(int id) {
    Registro48573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48573(Registro48573 r) {
    return r.valor + r.id;
}
