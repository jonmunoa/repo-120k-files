// fichero 1097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1097;

Registro1097 crear_registro1097(int id) {
    Registro1097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1097(Registro1097 r) {
    return r.valor + r.id;
}
