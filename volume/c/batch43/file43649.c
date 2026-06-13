// fichero 43649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43649;

Registro43649 crear_registro43649(int id) {
    Registro43649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43649(Registro43649 r) {
    return r.valor + r.id;
}
