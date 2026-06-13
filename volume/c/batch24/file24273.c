// fichero 24273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24273;

Registro24273 crear_registro24273(int id) {
    Registro24273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24273(Registro24273 r) {
    return r.valor + r.id;
}
