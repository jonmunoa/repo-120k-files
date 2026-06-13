// fichero 16401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16401;

Registro16401 crear_registro16401(int id) {
    Registro16401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16401(Registro16401 r) {
    return r.valor + r.id;
}
