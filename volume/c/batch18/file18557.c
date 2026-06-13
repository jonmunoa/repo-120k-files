// fichero 18557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18557;

Registro18557 crear_registro18557(int id) {
    Registro18557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18557(Registro18557 r) {
    return r.valor + r.id;
}
