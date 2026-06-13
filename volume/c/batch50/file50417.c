// fichero 50417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50417;

Registro50417 crear_registro50417(int id) {
    Registro50417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50417(Registro50417 r) {
    return r.valor + r.id;
}
