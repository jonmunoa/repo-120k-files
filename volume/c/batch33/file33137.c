// fichero 33137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33137;

Registro33137 crear_registro33137(int id) {
    Registro33137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33137(Registro33137 r) {
    return r.valor + r.id;
}
