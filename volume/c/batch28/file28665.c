// fichero 28665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28665;

Registro28665 crear_registro28665(int id) {
    Registro28665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28665(Registro28665 r) {
    return r.valor + r.id;
}
