// fichero 16129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16129;

Registro16129 crear_registro16129(int id) {
    Registro16129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16129(Registro16129 r) {
    return r.valor + r.id;
}
