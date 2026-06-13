// fichero 49477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49477;

Registro49477 crear_registro49477(int id) {
    Registro49477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49477(Registro49477 r) {
    return r.valor + r.id;
}
