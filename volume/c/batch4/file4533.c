// fichero 4533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4533;

Registro4533 crear_registro4533(int id) {
    Registro4533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4533(Registro4533 r) {
    return r.valor + r.id;
}
