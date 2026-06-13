// fichero 12709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12709;

Registro12709 crear_registro12709(int id) {
    Registro12709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12709(Registro12709 r) {
    return r.valor + r.id;
}
