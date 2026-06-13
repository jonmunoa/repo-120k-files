// fichero 16489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16489;

Registro16489 crear_registro16489(int id) {
    Registro16489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16489(Registro16489 r) {
    return r.valor + r.id;
}
