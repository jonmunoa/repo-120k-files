// fichero 18133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18133;

Registro18133 crear_registro18133(int id) {
    Registro18133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18133(Registro18133 r) {
    return r.valor + r.id;
}
