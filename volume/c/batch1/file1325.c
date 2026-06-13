// fichero 1325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1325;

Registro1325 crear_registro1325(int id) {
    Registro1325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1325(Registro1325 r) {
    return r.valor + r.id;
}
