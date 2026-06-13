// fichero 1885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1885;

Registro1885 crear_registro1885(int id) {
    Registro1885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1885(Registro1885 r) {
    return r.valor + r.id;
}
