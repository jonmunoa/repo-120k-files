// fichero 27341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27341;

Registro27341 crear_registro27341(int id) {
    Registro27341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27341(Registro27341 r) {
    return r.valor + r.id;
}
