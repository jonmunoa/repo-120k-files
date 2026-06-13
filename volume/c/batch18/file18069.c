// fichero 18069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18069;

Registro18069 crear_registro18069(int id) {
    Registro18069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18069(Registro18069 r) {
    return r.valor + r.id;
}
