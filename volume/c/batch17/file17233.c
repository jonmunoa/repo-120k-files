// fichero 17233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17233;

Registro17233 crear_registro17233(int id) {
    Registro17233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17233(Registro17233 r) {
    return r.valor + r.id;
}
