// fichero 16869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16869;

Registro16869 crear_registro16869(int id) {
    Registro16869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16869(Registro16869 r) {
    return r.valor + r.id;
}
