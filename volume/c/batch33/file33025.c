// fichero 33025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33025;

Registro33025 crear_registro33025(int id) {
    Registro33025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33025(Registro33025 r) {
    return r.valor + r.id;
}
