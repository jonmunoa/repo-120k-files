// fichero 573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro573;

Registro573 crear_registro573(int id) {
    Registro573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro573(Registro573 r) {
    return r.valor + r.id;
}
