// fichero 28501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28501;

Registro28501 crear_registro28501(int id) {
    Registro28501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28501(Registro28501 r) {
    return r.valor + r.id;
}
