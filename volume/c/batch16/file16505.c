// fichero 16505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16505;

Registro16505 crear_registro16505(int id) {
    Registro16505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16505(Registro16505 r) {
    return r.valor + r.id;
}
