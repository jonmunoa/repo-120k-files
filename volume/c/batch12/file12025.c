// fichero 12025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12025;

Registro12025 crear_registro12025(int id) {
    Registro12025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12025(Registro12025 r) {
    return r.valor + r.id;
}
