// fichero 28749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28749;

Registro28749 crear_registro28749(int id) {
    Registro28749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28749(Registro28749 r) {
    return r.valor + r.id;
}
