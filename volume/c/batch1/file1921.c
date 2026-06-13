// fichero 1921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1921;

Registro1921 crear_registro1921(int id) {
    Registro1921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1921(Registro1921 r) {
    return r.valor + r.id;
}
