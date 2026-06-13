// fichero 1765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1765;

Registro1765 crear_registro1765(int id) {
    Registro1765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1765(Registro1765 r) {
    return r.valor + r.id;
}
