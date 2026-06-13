// fichero 50797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50797;

Registro50797 crear_registro50797(int id) {
    Registro50797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50797(Registro50797 r) {
    return r.valor + r.id;
}
