// fichero 12553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12553;

Registro12553 crear_registro12553(int id) {
    Registro12553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12553(Registro12553 r) {
    return r.valor + r.id;
}
