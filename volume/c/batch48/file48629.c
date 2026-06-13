// fichero 48629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48629;

Registro48629 crear_registro48629(int id) {
    Registro48629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48629(Registro48629 r) {
    return r.valor + r.id;
}
