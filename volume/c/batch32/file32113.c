// fichero 32113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32113;

Registro32113 crear_registro32113(int id) {
    Registro32113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32113(Registro32113 r) {
    return r.valor + r.id;
}
