// fichero 54405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54405;

Registro54405 crear_registro54405(int id) {
    Registro54405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54405(Registro54405 r) {
    return r.valor + r.id;
}
