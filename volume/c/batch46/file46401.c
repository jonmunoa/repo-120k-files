// fichero 46401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46401;

Registro46401 crear_registro46401(int id) {
    Registro46401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46401(Registro46401 r) {
    return r.valor + r.id;
}
