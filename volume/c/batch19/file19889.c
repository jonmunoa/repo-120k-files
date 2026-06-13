// fichero 19889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19889;

Registro19889 crear_registro19889(int id) {
    Registro19889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19889(Registro19889 r) {
    return r.valor + r.id;
}
