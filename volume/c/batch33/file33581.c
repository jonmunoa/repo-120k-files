// fichero 33581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33581;

Registro33581 crear_registro33581(int id) {
    Registro33581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33581(Registro33581 r) {
    return r.valor + r.id;
}
