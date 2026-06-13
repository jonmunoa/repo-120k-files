// fichero 16517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16517;

Registro16517 crear_registro16517(int id) {
    Registro16517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16517(Registro16517 r) {
    return r.valor + r.id;
}
