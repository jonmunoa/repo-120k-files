// fichero 16949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16949;

Registro16949 crear_registro16949(int id) {
    Registro16949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16949(Registro16949 r) {
    return r.valor + r.id;
}
