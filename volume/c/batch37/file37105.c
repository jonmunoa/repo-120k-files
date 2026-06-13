// fichero 37105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37105;

Registro37105 crear_registro37105(int id) {
    Registro37105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37105(Registro37105 r) {
    return r.valor + r.id;
}
