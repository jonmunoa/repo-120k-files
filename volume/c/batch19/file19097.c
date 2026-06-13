// fichero 19097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19097;

Registro19097 crear_registro19097(int id) {
    Registro19097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19097(Registro19097 r) {
    return r.valor + r.id;
}
