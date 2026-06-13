// fichero 50885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50885;

Registro50885 crear_registro50885(int id) {
    Registro50885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50885(Registro50885 r) {
    return r.valor + r.id;
}
