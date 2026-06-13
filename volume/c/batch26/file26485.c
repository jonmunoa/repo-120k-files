// fichero 26485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26485;

Registro26485 crear_registro26485(int id) {
    Registro26485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26485(Registro26485 r) {
    return r.valor + r.id;
}
