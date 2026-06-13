// fichero 16217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16217;

Registro16217 crear_registro16217(int id) {
    Registro16217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16217(Registro16217 r) {
    return r.valor + r.id;
}
