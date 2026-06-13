// fichero 26013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26013;

Registro26013 crear_registro26013(int id) {
    Registro26013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26013(Registro26013 r) {
    return r.valor + r.id;
}
