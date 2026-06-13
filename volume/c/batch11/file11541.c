// fichero 11541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11541;

Registro11541 crear_registro11541(int id) {
    Registro11541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11541(Registro11541 r) {
    return r.valor + r.id;
}
