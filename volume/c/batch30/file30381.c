// fichero 30381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30381;

Registro30381 crear_registro30381(int id) {
    Registro30381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30381(Registro30381 r) {
    return r.valor + r.id;
}
