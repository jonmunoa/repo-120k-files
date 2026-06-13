// fichero 54837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54837;

Registro54837 crear_registro54837(int id) {
    Registro54837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54837(Registro54837 r) {
    return r.valor + r.id;
}
