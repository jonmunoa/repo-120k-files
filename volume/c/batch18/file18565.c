// fichero 18565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18565;

Registro18565 crear_registro18565(int id) {
    Registro18565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18565(Registro18565 r) {
    return r.valor + r.id;
}
