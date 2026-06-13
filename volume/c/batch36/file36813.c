// fichero 36813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36813;

Registro36813 crear_registro36813(int id) {
    Registro36813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36813(Registro36813 r) {
    return r.valor + r.id;
}
