// fichero 10825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10825;

Registro10825 crear_registro10825(int id) {
    Registro10825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10825(Registro10825 r) {
    return r.valor + r.id;
}
