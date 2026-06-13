// fichero 48325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48325;

Registro48325 crear_registro48325(int id) {
    Registro48325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48325(Registro48325 r) {
    return r.valor + r.id;
}
