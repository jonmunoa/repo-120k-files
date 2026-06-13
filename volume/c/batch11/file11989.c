// fichero 11989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11989;

Registro11989 crear_registro11989(int id) {
    Registro11989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11989(Registro11989 r) {
    return r.valor + r.id;
}
