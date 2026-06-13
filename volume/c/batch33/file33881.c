// fichero 33881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33881;

Registro33881 crear_registro33881(int id) {
    Registro33881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33881(Registro33881 r) {
    return r.valor + r.id;
}
