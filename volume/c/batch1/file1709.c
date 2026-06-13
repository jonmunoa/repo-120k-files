// fichero 1709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1709;

Registro1709 crear_registro1709(int id) {
    Registro1709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1709(Registro1709 r) {
    return r.valor + r.id;
}
