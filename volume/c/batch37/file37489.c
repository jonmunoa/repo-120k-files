// fichero 37489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37489;

Registro37489 crear_registro37489(int id) {
    Registro37489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37489(Registro37489 r) {
    return r.valor + r.id;
}
