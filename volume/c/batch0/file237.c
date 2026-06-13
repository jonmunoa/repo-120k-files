// fichero 237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro237;

Registro237 crear_registro237(int id) {
    Registro237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro237(Registro237 r) {
    return r.valor + r.id;
}
