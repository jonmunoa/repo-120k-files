// fichero 54149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54149;

Registro54149 crear_registro54149(int id) {
    Registro54149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54149(Registro54149 r) {
    return r.valor + r.id;
}
