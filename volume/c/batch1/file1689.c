// fichero 1689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1689;

Registro1689 crear_registro1689(int id) {
    Registro1689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1689(Registro1689 r) {
    return r.valor + r.id;
}
