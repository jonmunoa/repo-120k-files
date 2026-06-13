// fichero 48065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48065;

Registro48065 crear_registro48065(int id) {
    Registro48065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48065(Registro48065 r) {
    return r.valor + r.id;
}
