// fichero 22765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22765;

Registro22765 crear_registro22765(int id) {
    Registro22765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22765(Registro22765 r) {
    return r.valor + r.id;
}
