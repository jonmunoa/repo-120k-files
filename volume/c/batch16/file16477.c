// fichero 16477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16477;

Registro16477 crear_registro16477(int id) {
    Registro16477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16477(Registro16477 r) {
    return r.valor + r.id;
}
