// fichero 12281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12281;

Registro12281 crear_registro12281(int id) {
    Registro12281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12281(Registro12281 r) {
    return r.valor + r.id;
}
