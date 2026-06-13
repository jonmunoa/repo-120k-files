// fichero 16485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16485;

Registro16485 crear_registro16485(int id) {
    Registro16485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16485(Registro16485 r) {
    return r.valor + r.id;
}
