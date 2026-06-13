// fichero 1137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1137;

Registro1137 crear_registro1137(int id) {
    Registro1137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1137(Registro1137 r) {
    return r.valor + r.id;
}
