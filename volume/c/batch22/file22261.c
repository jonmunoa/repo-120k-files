// fichero 22261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22261;

Registro22261 crear_registro22261(int id) {
    Registro22261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22261(Registro22261 r) {
    return r.valor + r.id;
}
