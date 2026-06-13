// fichero 1025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1025;

Registro1025 crear_registro1025(int id) {
    Registro1025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1025(Registro1025 r) {
    return r.valor + r.id;
}
