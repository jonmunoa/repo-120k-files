// fichero 22497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22497;

Registro22497 crear_registro22497(int id) {
    Registro22497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22497(Registro22497 r) {
    return r.valor + r.id;
}
