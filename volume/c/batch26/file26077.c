// fichero 26077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26077;

Registro26077 crear_registro26077(int id) {
    Registro26077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26077(Registro26077 r) {
    return r.valor + r.id;
}
