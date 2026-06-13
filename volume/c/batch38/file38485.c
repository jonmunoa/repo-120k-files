// fichero 38485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38485;

Registro38485 crear_registro38485(int id) {
    Registro38485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38485(Registro38485 r) {
    return r.valor + r.id;
}
