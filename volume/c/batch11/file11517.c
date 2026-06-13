// fichero 11517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11517;

Registro11517 crear_registro11517(int id) {
    Registro11517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11517(Registro11517 r) {
    return r.valor + r.id;
}
