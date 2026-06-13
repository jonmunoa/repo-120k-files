// fichero 17521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17521;

Registro17521 crear_registro17521(int id) {
    Registro17521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17521(Registro17521 r) {
    return r.valor + r.id;
}
