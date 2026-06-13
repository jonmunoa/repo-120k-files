// fichero 1629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1629;

Registro1629 crear_registro1629(int id) {
    Registro1629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1629(Registro1629 r) {
    return r.valor + r.id;
}
