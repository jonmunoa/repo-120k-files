// fichero 33313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33313;

Registro33313 crear_registro33313(int id) {
    Registro33313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33313(Registro33313 r) {
    return r.valor + r.id;
}
