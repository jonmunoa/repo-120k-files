// fichero 16029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16029;

Registro16029 crear_registro16029(int id) {
    Registro16029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16029(Registro16029 r) {
    return r.valor + r.id;
}
