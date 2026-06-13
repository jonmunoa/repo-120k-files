// fichero 4001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4001;

Registro4001 crear_registro4001(int id) {
    Registro4001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4001(Registro4001 r) {
    return r.valor + r.id;
}
