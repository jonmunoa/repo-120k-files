// fichero 19421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19421;

Registro19421 crear_registro19421(int id) {
    Registro19421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19421(Registro19421 r) {
    return r.valor + r.id;
}
