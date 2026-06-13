// fichero 22941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22941;

Registro22941 crear_registro22941(int id) {
    Registro22941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22941(Registro22941 r) {
    return r.valor + r.id;
}
