// fichero 28133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28133;

Registro28133 crear_registro28133(int id) {
    Registro28133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28133(Registro28133 r) {
    return r.valor + r.id;
}
