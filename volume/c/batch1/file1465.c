// fichero 1465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1465;

Registro1465 crear_registro1465(int id) {
    Registro1465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1465(Registro1465 r) {
    return r.valor + r.id;
}
