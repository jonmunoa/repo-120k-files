// fichero 4425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4425;

Registro4425 crear_registro4425(int id) {
    Registro4425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4425(Registro4425 r) {
    return r.valor + r.id;
}
