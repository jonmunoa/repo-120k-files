// fichero 48089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48089;

Registro48089 crear_registro48089(int id) {
    Registro48089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48089(Registro48089 r) {
    return r.valor + r.id;
}
