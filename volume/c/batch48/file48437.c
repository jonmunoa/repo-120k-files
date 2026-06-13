// fichero 48437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48437;

Registro48437 crear_registro48437(int id) {
    Registro48437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48437(Registro48437 r) {
    return r.valor + r.id;
}
