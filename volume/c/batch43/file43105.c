// fichero 43105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43105;

Registro43105 crear_registro43105(int id) {
    Registro43105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43105(Registro43105 r) {
    return r.valor + r.id;
}
