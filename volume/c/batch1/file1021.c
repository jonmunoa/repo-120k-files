// fichero 1021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1021;

Registro1021 crear_registro1021(int id) {
    Registro1021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1021(Registro1021 r) {
    return r.valor + r.id;
}
