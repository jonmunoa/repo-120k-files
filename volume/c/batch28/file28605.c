// fichero 28605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28605;

Registro28605 crear_registro28605(int id) {
    Registro28605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28605(Registro28605 r) {
    return r.valor + r.id;
}
