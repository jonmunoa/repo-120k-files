// fichero 16957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16957;

Registro16957 crear_registro16957(int id) {
    Registro16957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16957(Registro16957 r) {
    return r.valor + r.id;
}
