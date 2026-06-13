// fichero 1017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1017;

Registro1017 crear_registro1017(int id) {
    Registro1017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1017(Registro1017 r) {
    return r.valor + r.id;
}
