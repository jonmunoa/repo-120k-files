// fichero 1157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1157;

Registro1157 crear_registro1157(int id) {
    Registro1157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1157(Registro1157 r) {
    return r.valor + r.id;
}
