// fichero 27573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27573;

Registro27573 crear_registro27573(int id) {
    Registro27573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27573(Registro27573 r) {
    return r.valor + r.id;
}
