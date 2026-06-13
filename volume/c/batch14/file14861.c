// fichero 14861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14861;

Registro14861 crear_registro14861(int id) {
    Registro14861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14861(Registro14861 r) {
    return r.valor + r.id;
}
