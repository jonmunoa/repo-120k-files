// fichero 16577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16577;

Registro16577 crear_registro16577(int id) {
    Registro16577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16577(Registro16577 r) {
    return r.valor + r.id;
}
