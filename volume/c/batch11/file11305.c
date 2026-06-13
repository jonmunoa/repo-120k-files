// fichero 11305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11305;

Registro11305 crear_registro11305(int id) {
    Registro11305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11305(Registro11305 r) {
    return r.valor + r.id;
}
