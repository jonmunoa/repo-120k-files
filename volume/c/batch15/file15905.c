// fichero 15905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15905;

Registro15905 crear_registro15905(int id) {
    Registro15905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15905(Registro15905 r) {
    return r.valor + r.id;
}
