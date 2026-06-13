// fichero 28613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28613;

Registro28613 crear_registro28613(int id) {
    Registro28613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28613(Registro28613 r) {
    return r.valor + r.id;
}
