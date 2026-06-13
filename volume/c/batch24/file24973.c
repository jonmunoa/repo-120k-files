// fichero 24973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24973;

Registro24973 crear_registro24973(int id) {
    Registro24973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24973(Registro24973 r) {
    return r.valor + r.id;
}
