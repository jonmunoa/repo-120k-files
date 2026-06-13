// fichero 33057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33057;

Registro33057 crear_registro33057(int id) {
    Registro33057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33057(Registro33057 r) {
    return r.valor + r.id;
}
