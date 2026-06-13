// fichero 16169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16169;

Registro16169 crear_registro16169(int id) {
    Registro16169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16169(Registro16169 r) {
    return r.valor + r.id;
}
