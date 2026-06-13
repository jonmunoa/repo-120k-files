// fichero 5517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5517;

Registro5517 crear_registro5517(int id) {
    Registro5517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5517(Registro5517 r) {
    return r.valor + r.id;
}
