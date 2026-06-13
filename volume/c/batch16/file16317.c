// fichero 16317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16317;

Registro16317 crear_registro16317(int id) {
    Registro16317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16317(Registro16317 r) {
    return r.valor + r.id;
}
