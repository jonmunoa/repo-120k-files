// fichero 7729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7729;

Registro7729 crear_registro7729(int id) {
    Registro7729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7729(Registro7729 r) {
    return r.valor + r.id;
}
