// fichero 1685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1685;

Registro1685 crear_registro1685(int id) {
    Registro1685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1685(Registro1685 r) {
    return r.valor + r.id;
}
