// fichero 16377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16377;

Registro16377 crear_registro16377(int id) {
    Registro16377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16377(Registro16377 r) {
    return r.valor + r.id;
}
