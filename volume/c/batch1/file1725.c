// fichero 1725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1725;

Registro1725 crear_registro1725(int id) {
    Registro1725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1725(Registro1725 r) {
    return r.valor + r.id;
}
