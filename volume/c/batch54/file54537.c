// fichero 54537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54537;

Registro54537 crear_registro54537(int id) {
    Registro54537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54537(Registro54537 r) {
    return r.valor + r.id;
}
