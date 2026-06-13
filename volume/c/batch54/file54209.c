// fichero 54209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54209;

Registro54209 crear_registro54209(int id) {
    Registro54209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54209(Registro54209 r) {
    return r.valor + r.id;
}
