// fichero 19677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19677;

Registro19677 crear_registro19677(int id) {
    Registro19677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19677(Registro19677 r) {
    return r.valor + r.id;
}
