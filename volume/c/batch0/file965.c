// fichero 965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro965;

Registro965 crear_registro965(int id) {
    Registro965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro965(Registro965 r) {
    return r.valor + r.id;
}
