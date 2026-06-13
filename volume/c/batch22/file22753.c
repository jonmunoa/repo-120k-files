// fichero 22753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22753;

Registro22753 crear_registro22753(int id) {
    Registro22753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22753(Registro22753 r) {
    return r.valor + r.id;
}
