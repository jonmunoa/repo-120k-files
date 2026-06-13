// fichero 28517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28517;

Registro28517 crear_registro28517(int id) {
    Registro28517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28517(Registro28517 r) {
    return r.valor + r.id;
}
