// fichero 22105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22105;

Registro22105 crear_registro22105(int id) {
    Registro22105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22105(Registro22105 r) {
    return r.valor + r.id;
}
