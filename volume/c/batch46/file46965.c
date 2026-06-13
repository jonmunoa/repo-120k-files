// fichero 46965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46965;

Registro46965 crear_registro46965(int id) {
    Registro46965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46965(Registro46965 r) {
    return r.valor + r.id;
}
