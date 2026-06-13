// fichero 7965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7965;

Registro7965 crear_registro7965(int id) {
    Registro7965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7965(Registro7965 r) {
    return r.valor + r.id;
}
