// fichero 11341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11341;

Registro11341 crear_registro11341(int id) {
    Registro11341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11341(Registro11341 r) {
    return r.valor + r.id;
}
