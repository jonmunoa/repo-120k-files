// fichero 18805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18805;

Registro18805 crear_registro18805(int id) {
    Registro18805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18805(Registro18805 r) {
    return r.valor + r.id;
}
