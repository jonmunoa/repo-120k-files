// fichero 1469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1469;

Registro1469 crear_registro1469(int id) {
    Registro1469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1469(Registro1469 r) {
    return r.valor + r.id;
}
