// fichero 10341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10341;

Registro10341 crear_registro10341(int id) {
    Registro10341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10341(Registro10341 r) {
    return r.valor + r.id;
}
