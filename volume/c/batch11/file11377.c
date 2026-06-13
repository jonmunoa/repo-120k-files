// fichero 11377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11377;

Registro11377 crear_registro11377(int id) {
    Registro11377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11377(Registro11377 r) {
    return r.valor + r.id;
}
