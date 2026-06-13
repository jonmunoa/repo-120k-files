// fichero 10573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10573;

Registro10573 crear_registro10573(int id) {
    Registro10573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10573(Registro10573 r) {
    return r.valor + r.id;
}
