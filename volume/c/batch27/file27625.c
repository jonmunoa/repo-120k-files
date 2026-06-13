// fichero 27625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27625;

Registro27625 crear_registro27625(int id) {
    Registro27625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27625(Registro27625 r) {
    return r.valor + r.id;
}
