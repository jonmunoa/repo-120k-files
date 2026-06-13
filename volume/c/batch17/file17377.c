// fichero 17377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17377;

Registro17377 crear_registro17377(int id) {
    Registro17377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17377(Registro17377 r) {
    return r.valor + r.id;
}
