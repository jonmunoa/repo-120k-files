// fichero 37745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37745;

Registro37745 crear_registro37745(int id) {
    Registro37745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37745(Registro37745 r) {
    return r.valor + r.id;
}
