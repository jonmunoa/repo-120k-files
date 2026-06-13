// fichero 22201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22201;

Registro22201 crear_registro22201(int id) {
    Registro22201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22201(Registro22201 r) {
    return r.valor + r.id;
}
