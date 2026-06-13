// fichero 1077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1077;

Registro1077 crear_registro1077(int id) {
    Registro1077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1077(Registro1077 r) {
    return r.valor + r.id;
}
