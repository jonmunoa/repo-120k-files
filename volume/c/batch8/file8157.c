// fichero 8157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8157;

Registro8157 crear_registro8157(int id) {
    Registro8157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8157(Registro8157 r) {
    return r.valor + r.id;
}
