// fichero 22185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22185;

Registro22185 crear_registro22185(int id) {
    Registro22185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22185(Registro22185 r) {
    return r.valor + r.id;
}
