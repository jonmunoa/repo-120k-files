// fichero 21461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21461;

Registro21461 crear_registro21461(int id) {
    Registro21461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21461(Registro21461 r) {
    return r.valor + r.id;
}
