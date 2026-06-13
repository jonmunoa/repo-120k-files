// fichero 28825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28825;

Registro28825 crear_registro28825(int id) {
    Registro28825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28825(Registro28825 r) {
    return r.valor + r.id;
}
