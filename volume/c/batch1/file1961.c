// fichero 1961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1961;

Registro1961 crear_registro1961(int id) {
    Registro1961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1961(Registro1961 r) {
    return r.valor + r.id;
}
