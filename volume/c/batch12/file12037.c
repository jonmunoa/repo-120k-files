// fichero 12037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12037;

Registro12037 crear_registro12037(int id) {
    Registro12037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12037(Registro12037 r) {
    return r.valor + r.id;
}
