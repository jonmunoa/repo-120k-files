// fichero 1581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1581;

Registro1581 crear_registro1581(int id) {
    Registro1581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1581(Registro1581 r) {
    return r.valor + r.id;
}
