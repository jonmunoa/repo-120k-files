// fichero 12413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12413;

Registro12413 crear_registro12413(int id) {
    Registro12413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12413(Registro12413 r) {
    return r.valor + r.id;
}
