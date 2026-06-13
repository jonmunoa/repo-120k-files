// fichero 22277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22277;

Registro22277 crear_registro22277(int id) {
    Registro22277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22277(Registro22277 r) {
    return r.valor + r.id;
}
