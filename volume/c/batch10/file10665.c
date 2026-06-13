// fichero 10665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10665;

Registro10665 crear_registro10665(int id) {
    Registro10665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10665(Registro10665 r) {
    return r.valor + r.id;
}
