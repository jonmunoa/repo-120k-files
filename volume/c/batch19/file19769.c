// fichero 19769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19769;

Registro19769 crear_registro19769(int id) {
    Registro19769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19769(Registro19769 r) {
    return r.valor + r.id;
}
