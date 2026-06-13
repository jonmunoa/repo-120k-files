// fichero 22957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22957;

Registro22957 crear_registro22957(int id) {
    Registro22957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22957(Registro22957 r) {
    return r.valor + r.id;
}
