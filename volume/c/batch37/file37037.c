// fichero 37037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37037;

Registro37037 crear_registro37037(int id) {
    Registro37037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37037(Registro37037 r) {
    return r.valor + r.id;
}
