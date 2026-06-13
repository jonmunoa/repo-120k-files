// fichero 37093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37093;

Registro37093 crear_registro37093(int id) {
    Registro37093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37093(Registro37093 r) {
    return r.valor + r.id;
}
