// fichero 16081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16081;

Registro16081 crear_registro16081(int id) {
    Registro16081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16081(Registro16081 r) {
    return r.valor + r.id;
}
