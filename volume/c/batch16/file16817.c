// fichero 16817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16817;

Registro16817 crear_registro16817(int id) {
    Registro16817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16817(Registro16817 r) {
    return r.valor + r.id;
}
