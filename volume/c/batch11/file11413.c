// fichero 11413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11413;

Registro11413 crear_registro11413(int id) {
    Registro11413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11413(Registro11413 r) {
    return r.valor + r.id;
}
