// fichero 16205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16205;

Registro16205 crear_registro16205(int id) {
    Registro16205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16205(Registro16205 r) {
    return r.valor + r.id;
}
