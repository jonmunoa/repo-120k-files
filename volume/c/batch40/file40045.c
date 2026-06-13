// fichero 40045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40045;

Registro40045 crear_registro40045(int id) {
    Registro40045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40045(Registro40045 r) {
    return r.valor + r.id;
}
