// fichero 12477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12477;

Registro12477 crear_registro12477(int id) {
    Registro12477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12477(Registro12477 r) {
    return r.valor + r.id;
}
