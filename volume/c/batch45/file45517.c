// fichero 45517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45517;

Registro45517 crear_registro45517(int id) {
    Registro45517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45517(Registro45517 r) {
    return r.valor + r.id;
}
