// fichero 18417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18417;

Registro18417 crear_registro18417(int id) {
    Registro18417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18417(Registro18417 r) {
    return r.valor + r.id;
}
