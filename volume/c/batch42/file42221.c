// fichero 42221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42221;

Registro42221 crear_registro42221(int id) {
    Registro42221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42221(Registro42221 r) {
    return r.valor + r.id;
}
