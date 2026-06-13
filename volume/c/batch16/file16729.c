// fichero 16729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16729;

Registro16729 crear_registro16729(int id) {
    Registro16729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16729(Registro16729 r) {
    return r.valor + r.id;
}
