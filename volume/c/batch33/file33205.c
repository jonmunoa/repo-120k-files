// fichero 33205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33205;

Registro33205 crear_registro33205(int id) {
    Registro33205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33205(Registro33205 r) {
    return r.valor + r.id;
}
