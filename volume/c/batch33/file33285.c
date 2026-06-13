// fichero 33285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33285;

Registro33285 crear_registro33285(int id) {
    Registro33285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33285(Registro33285 r) {
    return r.valor + r.id;
}
