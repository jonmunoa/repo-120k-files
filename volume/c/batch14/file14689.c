// fichero 14689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14689;

Registro14689 crear_registro14689(int id) {
    Registro14689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14689(Registro14689 r) {
    return r.valor + r.id;
}
