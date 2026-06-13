// fichero 38565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38565;

Registro38565 crear_registro38565(int id) {
    Registro38565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38565(Registro38565 r) {
    return r.valor + r.id;
}
