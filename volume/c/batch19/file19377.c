// fichero 19377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19377;

Registro19377 crear_registro19377(int id) {
    Registro19377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19377(Registro19377 r) {
    return r.valor + r.id;
}
