// fichero 16113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16113;

Registro16113 crear_registro16113(int id) {
    Registro16113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16113(Registro16113 r) {
    return r.valor + r.id;
}
