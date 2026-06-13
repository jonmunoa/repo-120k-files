// fichero 16657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16657;

Registro16657 crear_registro16657(int id) {
    Registro16657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16657(Registro16657 r) {
    return r.valor + r.id;
}
