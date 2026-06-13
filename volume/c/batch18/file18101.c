// fichero 18101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18101;

Registro18101 crear_registro18101(int id) {
    Registro18101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18101(Registro18101 r) {
    return r.valor + r.id;
}
