// fichero 1165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1165;

Registro1165 crear_registro1165(int id) {
    Registro1165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1165(Registro1165 r) {
    return r.valor + r.id;
}
