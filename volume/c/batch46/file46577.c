// fichero 46577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46577;

Registro46577 crear_registro46577(int id) {
    Registro46577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46577(Registro46577 r) {
    return r.valor + r.id;
}
