// fichero 10257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10257;

Registro10257 crear_registro10257(int id) {
    Registro10257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10257(Registro10257 r) {
    return r.valor + r.id;
}
