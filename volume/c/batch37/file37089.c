// fichero 37089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37089;

Registro37089 crear_registro37089(int id) {
    Registro37089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37089(Registro37089 r) {
    return r.valor + r.id;
}
