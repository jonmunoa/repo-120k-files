// fichero 33749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33749;

Registro33749 crear_registro33749(int id) {
    Registro33749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33749(Registro33749 r) {
    return r.valor + r.id;
}
