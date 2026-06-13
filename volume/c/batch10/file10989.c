// fichero 10989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10989;

Registro10989 crear_registro10989(int id) {
    Registro10989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10989(Registro10989 r) {
    return r.valor + r.id;
}
