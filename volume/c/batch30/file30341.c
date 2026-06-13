// fichero 30341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30341;

Registro30341 crear_registro30341(int id) {
    Registro30341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30341(Registro30341 r) {
    return r.valor + r.id;
}
