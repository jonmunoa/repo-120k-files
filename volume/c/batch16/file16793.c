// fichero 16793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16793;

Registro16793 crear_registro16793(int id) {
    Registro16793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16793(Registro16793 r) {
    return r.valor + r.id;
}
