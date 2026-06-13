// fichero 16861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16861;

Registro16861 crear_registro16861(int id) {
    Registro16861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16861(Registro16861 r) {
    return r.valor + r.id;
}
