// fichero 37797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37797;

Registro37797 crear_registro37797(int id) {
    Registro37797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37797(Registro37797 r) {
    return r.valor + r.id;
}
