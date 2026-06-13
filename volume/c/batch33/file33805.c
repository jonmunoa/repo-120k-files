// fichero 33805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33805;

Registro33805 crear_registro33805(int id) {
    Registro33805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33805(Registro33805 r) {
    return r.valor + r.id;
}
