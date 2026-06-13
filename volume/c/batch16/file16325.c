// fichero 16325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16325;

Registro16325 crear_registro16325(int id) {
    Registro16325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16325(Registro16325 r) {
    return r.valor + r.id;
}
