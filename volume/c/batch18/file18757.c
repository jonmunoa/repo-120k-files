// fichero 18757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18757;

Registro18757 crear_registro18757(int id) {
    Registro18757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18757(Registro18757 r) {
    return r.valor + r.id;
}
