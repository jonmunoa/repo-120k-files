// fichero 1065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1065;

Registro1065 crear_registro1065(int id) {
    Registro1065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1065(Registro1065 r) {
    return r.valor + r.id;
}
