// fichero 48581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48581;

Registro48581 crear_registro48581(int id) {
    Registro48581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48581(Registro48581 r) {
    return r.valor + r.id;
}
