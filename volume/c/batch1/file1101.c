// fichero 1101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1101;

Registro1101 crear_registro1101(int id) {
    Registro1101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1101(Registro1101 r) {
    return r.valor + r.id;
}
