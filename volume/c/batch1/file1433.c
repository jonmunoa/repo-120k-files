// fichero 1433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1433;

Registro1433 crear_registro1433(int id) {
    Registro1433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1433(Registro1433 r) {
    return r.valor + r.id;
}
