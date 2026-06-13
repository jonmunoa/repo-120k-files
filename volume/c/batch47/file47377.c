// fichero 47377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47377;

Registro47377 crear_registro47377(int id) {
    Registro47377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47377(Registro47377 r) {
    return r.valor + r.id;
}
