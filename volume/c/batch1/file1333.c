// fichero 1333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1333;

Registro1333 crear_registro1333(int id) {
    Registro1333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1333(Registro1333 r) {
    return r.valor + r.id;
}
