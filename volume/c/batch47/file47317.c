// fichero 47317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47317;

Registro47317 crear_registro47317(int id) {
    Registro47317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47317(Registro47317 r) {
    return r.valor + r.id;
}
