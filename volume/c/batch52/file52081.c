// fichero 52081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52081;

Registro52081 crear_registro52081(int id) {
    Registro52081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52081(Registro52081 r) {
    return r.valor + r.id;
}
