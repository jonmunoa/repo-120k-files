// fichero 16393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16393;

Registro16393 crear_registro16393(int id) {
    Registro16393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16393(Registro16393 r) {
    return r.valor + r.id;
}
