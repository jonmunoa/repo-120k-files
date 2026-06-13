// fichero 54913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54913;

Registro54913 crear_registro54913(int id) {
    Registro54913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54913(Registro54913 r) {
    return r.valor + r.id;
}
