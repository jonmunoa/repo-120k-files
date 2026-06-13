// fichero 11597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11597;

Registro11597 crear_registro11597(int id) {
    Registro11597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11597(Registro11597 r) {
    return r.valor + r.id;
}
