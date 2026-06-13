// fichero 11889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11889;

Registro11889 crear_registro11889(int id) {
    Registro11889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11889(Registro11889 r) {
    return r.valor + r.id;
}
