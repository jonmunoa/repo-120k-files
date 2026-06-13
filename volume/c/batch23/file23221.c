// fichero 23221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23221;

Registro23221 crear_registro23221(int id) {
    Registro23221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23221(Registro23221 r) {
    return r.valor + r.id;
}
