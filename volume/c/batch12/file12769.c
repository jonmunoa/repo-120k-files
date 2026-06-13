// fichero 12769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12769;

Registro12769 crear_registro12769(int id) {
    Registro12769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12769(Registro12769 r) {
    return r.valor + r.id;
}
