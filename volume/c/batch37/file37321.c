// fichero 37321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37321;

Registro37321 crear_registro37321(int id) {
    Registro37321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37321(Registro37321 r) {
    return r.valor + r.id;
}
