// fichero 22965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22965;

Registro22965 crear_registro22965(int id) {
    Registro22965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22965(Registro22965 r) {
    return r.valor + r.id;
}
