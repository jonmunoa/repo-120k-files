// fichero 47397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47397;

Registro47397 crear_registro47397(int id) {
    Registro47397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47397(Registro47397 r) {
    return r.valor + r.id;
}
