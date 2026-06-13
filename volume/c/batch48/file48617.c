// fichero 48617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48617;

Registro48617 crear_registro48617(int id) {
    Registro48617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48617(Registro48617 r) {
    return r.valor + r.id;
}
