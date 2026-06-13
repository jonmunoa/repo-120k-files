// fichero 48653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48653;

Registro48653 crear_registro48653(int id) {
    Registro48653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48653(Registro48653 r) {
    return r.valor + r.id;
}
