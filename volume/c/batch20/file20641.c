// fichero 20641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20641;

Registro20641 crear_registro20641(int id) {
    Registro20641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20641(Registro20641 r) {
    return r.valor + r.id;
}
