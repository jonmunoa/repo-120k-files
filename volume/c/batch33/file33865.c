// fichero 33865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33865;

Registro33865 crear_registro33865(int id) {
    Registro33865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33865(Registro33865 r) {
    return r.valor + r.id;
}
