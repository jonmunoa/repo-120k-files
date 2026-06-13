// fichero 28061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28061;

Registro28061 crear_registro28061(int id) {
    Registro28061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28061(Registro28061 r) {
    return r.valor + r.id;
}
