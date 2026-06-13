// fichero 18541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18541;

Registro18541 crear_registro18541(int id) {
    Registro18541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18541(Registro18541 r) {
    return r.valor + r.id;
}
