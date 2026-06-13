// fichero 48845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48845;

Registro48845 crear_registro48845(int id) {
    Registro48845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48845(Registro48845 r) {
    return r.valor + r.id;
}
