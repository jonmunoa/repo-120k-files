// fichero 1201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1201;

Registro1201 crear_registro1201(int id) {
    Registro1201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1201(Registro1201 r) {
    return r.valor + r.id;
}
