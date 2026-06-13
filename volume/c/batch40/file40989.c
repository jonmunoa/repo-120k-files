// fichero 40989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40989;

Registro40989 crear_registro40989(int id) {
    Registro40989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40989(Registro40989 r) {
    return r.valor + r.id;
}
