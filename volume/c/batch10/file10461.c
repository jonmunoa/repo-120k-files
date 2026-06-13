// fichero 10461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10461;

Registro10461 crear_registro10461(int id) {
    Registro10461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10461(Registro10461 r) {
    return r.valor + r.id;
}
