// fichero 22209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22209;

Registro22209 crear_registro22209(int id) {
    Registro22209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22209(Registro22209 r) {
    return r.valor + r.id;
}
