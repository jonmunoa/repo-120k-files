// fichero 33809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33809;

Registro33809 crear_registro33809(int id) {
    Registro33809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33809(Registro33809 r) {
    return r.valor + r.id;
}
