// fichero 18345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18345;

Registro18345 crear_registro18345(int id) {
    Registro18345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18345(Registro18345 r) {
    return r.valor + r.id;
}
