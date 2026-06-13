// fichero 28565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28565;

Registro28565 crear_registro28565(int id) {
    Registro28565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28565(Registro28565 r) {
    return r.valor + r.id;
}
