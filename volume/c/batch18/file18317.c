// fichero 18317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18317;

Registro18317 crear_registro18317(int id) {
    Registro18317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18317(Registro18317 r) {
    return r.valor + r.id;
}
