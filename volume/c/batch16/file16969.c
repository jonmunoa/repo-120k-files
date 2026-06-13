// fichero 16969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16969;

Registro16969 crear_registro16969(int id) {
    Registro16969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16969(Registro16969 r) {
    return r.valor + r.id;
}
