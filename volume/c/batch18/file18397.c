// fichero 18397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18397;

Registro18397 crear_registro18397(int id) {
    Registro18397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18397(Registro18397 r) {
    return r.valor + r.id;
}
