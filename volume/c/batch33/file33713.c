// fichero 33713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33713;

Registro33713 crear_registro33713(int id) {
    Registro33713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33713(Registro33713 r) {
    return r.valor + r.id;
}
