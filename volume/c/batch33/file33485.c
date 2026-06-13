// fichero 33485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33485;

Registro33485 crear_registro33485(int id) {
    Registro33485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33485(Registro33485 r) {
    return r.valor + r.id;
}
