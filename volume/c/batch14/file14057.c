// fichero 14057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14057;

Registro14057 crear_registro14057(int id) {
    Registro14057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14057(Registro14057 r) {
    return r.valor + r.id;
}
