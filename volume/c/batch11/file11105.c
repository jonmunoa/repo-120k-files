// fichero 11105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11105;

Registro11105 crear_registro11105(int id) {
    Registro11105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11105(Registro11105 r) {
    return r.valor + r.id;
}
