// fichero 16669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16669;

Registro16669 crear_registro16669(int id) {
    Registro16669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16669(Registro16669 r) {
    return r.valor + r.id;
}
