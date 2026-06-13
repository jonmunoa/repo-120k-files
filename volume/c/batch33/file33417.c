// fichero 33417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33417;

Registro33417 crear_registro33417(int id) {
    Registro33417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33417(Registro33417 r) {
    return r.valor + r.id;
}
