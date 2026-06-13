// fichero 47157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47157;

Registro47157 crear_registro47157(int id) {
    Registro47157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47157(Registro47157 r) {
    return r.valor + r.id;
}
