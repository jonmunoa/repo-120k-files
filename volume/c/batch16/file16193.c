// fichero 16193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16193;

Registro16193 crear_registro16193(int id) {
    Registro16193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16193(Registro16193 r) {
    return r.valor + r.id;
}
