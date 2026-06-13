// fichero 1989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1989;

Registro1989 crear_registro1989(int id) {
    Registro1989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1989(Registro1989 r) {
    return r.valor + r.id;
}
