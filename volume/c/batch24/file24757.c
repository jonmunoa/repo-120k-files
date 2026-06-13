// fichero 24757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24757;

Registro24757 crear_registro24757(int id) {
    Registro24757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24757(Registro24757 r) {
    return r.valor + r.id;
}
