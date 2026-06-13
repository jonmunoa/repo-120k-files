// fichero 54505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54505;

Registro54505 crear_registro54505(int id) {
    Registro54505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54505(Registro54505 r) {
    return r.valor + r.id;
}
