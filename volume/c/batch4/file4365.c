// fichero 4365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4365;

Registro4365 crear_registro4365(int id) {
    Registro4365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4365(Registro4365 r) {
    return r.valor + r.id;
}
