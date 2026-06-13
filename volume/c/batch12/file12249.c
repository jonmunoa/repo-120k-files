// fichero 12249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12249;

Registro12249 crear_registro12249(int id) {
    Registro12249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12249(Registro12249 r) {
    return r.valor + r.id;
}
