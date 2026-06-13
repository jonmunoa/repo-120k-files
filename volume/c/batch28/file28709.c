// fichero 28709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28709;

Registro28709 crear_registro28709(int id) {
    Registro28709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28709(Registro28709 r) {
    return r.valor + r.id;
}
