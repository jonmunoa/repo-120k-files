// fichero 33565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33565;

Registro33565 crear_registro33565(int id) {
    Registro33565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33565(Registro33565 r) {
    return r.valor + r.id;
}
