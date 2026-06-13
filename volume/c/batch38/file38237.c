// fichero 38237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38237;

Registro38237 crear_registro38237(int id) {
    Registro38237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38237(Registro38237 r) {
    return r.valor + r.id;
}
