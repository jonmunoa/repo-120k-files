// fichero 21213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21213;

Registro21213 crear_registro21213(int id) {
    Registro21213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21213(Registro21213 r) {
    return r.valor + r.id;
}
