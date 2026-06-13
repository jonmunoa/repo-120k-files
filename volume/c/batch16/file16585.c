// fichero 16585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16585;

Registro16585 crear_registro16585(int id) {
    Registro16585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16585(Registro16585 r) {
    return r.valor + r.id;
}
