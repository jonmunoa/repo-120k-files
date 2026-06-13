// fichero 11525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11525;

Registro11525 crear_registro11525(int id) {
    Registro11525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11525(Registro11525 r) {
    return r.valor + r.id;
}
