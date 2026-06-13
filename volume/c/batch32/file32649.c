// fichero 32649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32649;

Registro32649 crear_registro32649(int id) {
    Registro32649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32649(Registro32649 r) {
    return r.valor + r.id;
}
