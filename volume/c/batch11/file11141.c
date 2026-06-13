// fichero 11141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11141;

Registro11141 crear_registro11141(int id) {
    Registro11141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11141(Registro11141 r) {
    return r.valor + r.id;
}
