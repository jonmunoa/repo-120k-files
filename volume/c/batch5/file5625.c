// fichero 5625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5625;

Registro5625 crear_registro5625(int id) {
    Registro5625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5625(Registro5625 r) {
    return r.valor + r.id;
}
