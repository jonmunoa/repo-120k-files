// fichero 37397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37397;

Registro37397 crear_registro37397(int id) {
    Registro37397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37397(Registro37397 r) {
    return r.valor + r.id;
}
