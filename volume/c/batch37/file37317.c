// fichero 37317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37317;

Registro37317 crear_registro37317(int id) {
    Registro37317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37317(Registro37317 r) {
    return r.valor + r.id;
}
