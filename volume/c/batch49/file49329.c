// fichero 49329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49329;

Registro49329 crear_registro49329(int id) {
    Registro49329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49329(Registro49329 r) {
    return r.valor + r.id;
}
