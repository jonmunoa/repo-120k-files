// fichero 16065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16065;

Registro16065 crear_registro16065(int id) {
    Registro16065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16065(Registro16065 r) {
    return r.valor + r.id;
}
