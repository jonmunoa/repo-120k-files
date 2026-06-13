// fichero 27521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27521;

Registro27521 crear_registro27521(int id) {
    Registro27521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27521(Registro27521 r) {
    return r.valor + r.id;
}
