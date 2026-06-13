// fichero 30697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30697;

Registro30697 crear_registro30697(int id) {
    Registro30697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30697(Registro30697 r) {
    return r.valor + r.id;
}
