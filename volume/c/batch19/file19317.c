// fichero 19317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19317;

Registro19317 crear_registro19317(int id) {
    Registro19317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19317(Registro19317 r) {
    return r.valor + r.id;
}
