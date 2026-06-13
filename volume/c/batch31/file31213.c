// fichero 31213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31213;

Registro31213 crear_registro31213(int id) {
    Registro31213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31213(Registro31213 r) {
    return r.valor + r.id;
}
