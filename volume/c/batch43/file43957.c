// fichero 43957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43957;

Registro43957 crear_registro43957(int id) {
    Registro43957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43957(Registro43957 r) {
    return r.valor + r.id;
}
