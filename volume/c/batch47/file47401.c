// fichero 47401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47401;

Registro47401 crear_registro47401(int id) {
    Registro47401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47401(Registro47401 r) {
    return r.valor + r.id;
}
