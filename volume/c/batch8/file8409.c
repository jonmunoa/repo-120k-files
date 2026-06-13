// fichero 8409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8409;

Registro8409 crear_registro8409(int id) {
    Registro8409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8409(Registro8409 r) {
    return r.valor + r.id;
}
