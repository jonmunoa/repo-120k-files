// fichero 48709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48709;

Registro48709 crear_registro48709(int id) {
    Registro48709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48709(Registro48709 r) {
    return r.valor + r.id;
}
