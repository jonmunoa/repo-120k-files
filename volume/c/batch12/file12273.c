// fichero 12273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12273;

Registro12273 crear_registro12273(int id) {
    Registro12273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12273(Registro12273 r) {
    return r.valor + r.id;
}
