// fichero 40477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40477;

Registro40477 crear_registro40477(int id) {
    Registro40477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40477(Registro40477 r) {
    return r.valor + r.id;
}
