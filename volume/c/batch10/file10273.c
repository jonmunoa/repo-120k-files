// fichero 10273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10273;

Registro10273 crear_registro10273(int id) {
    Registro10273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10273(Registro10273 r) {
    return r.valor + r.id;
}
