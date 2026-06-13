// fichero 13417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13417;

Registro13417 crear_registro13417(int id) {
    Registro13417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13417(Registro13417 r) {
    return r.valor + r.id;
}
