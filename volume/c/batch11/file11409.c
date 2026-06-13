// fichero 11409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11409;

Registro11409 crear_registro11409(int id) {
    Registro11409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11409(Registro11409 r) {
    return r.valor + r.id;
}
