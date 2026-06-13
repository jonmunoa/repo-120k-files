// fichero 16945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16945;

Registro16945 crear_registro16945(int id) {
    Registro16945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16945(Registro16945 r) {
    return r.valor + r.id;
}
