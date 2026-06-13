// fichero 14485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14485;

Registro14485 crear_registro14485(int id) {
    Registro14485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14485(Registro14485 r) {
    return r.valor + r.id;
}
