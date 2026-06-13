// fichero 12889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12889;

Registro12889 crear_registro12889(int id) {
    Registro12889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12889(Registro12889 r) {
    return r.valor + r.id;
}
