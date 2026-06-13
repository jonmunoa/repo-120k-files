// fichero 1969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1969;

Registro1969 crear_registro1969(int id) {
    Registro1969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1969(Registro1969 r) {
    return r.valor + r.id;
}
