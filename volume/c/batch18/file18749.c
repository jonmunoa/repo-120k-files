// fichero 18749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18749;

Registro18749 crear_registro18749(int id) {
    Registro18749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18749(Registro18749 r) {
    return r.valor + r.id;
}
