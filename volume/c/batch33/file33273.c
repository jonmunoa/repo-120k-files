// fichero 33273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33273;

Registro33273 crear_registro33273(int id) {
    Registro33273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33273(Registro33273 r) {
    return r.valor + r.id;
}
