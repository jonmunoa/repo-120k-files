// fichero 33477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33477;

Registro33477 crear_registro33477(int id) {
    Registro33477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33477(Registro33477 r) {
    return r.valor + r.id;
}
