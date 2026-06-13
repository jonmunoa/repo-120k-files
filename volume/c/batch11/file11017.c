// fichero 11017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11017;

Registro11017 crear_registro11017(int id) {
    Registro11017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11017(Registro11017 r) {
    return r.valor + r.id;
}
