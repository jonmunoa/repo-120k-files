// fichero 37129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37129;

Registro37129 crear_registro37129(int id) {
    Registro37129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37129(Registro37129 r) {
    return r.valor + r.id;
}
