// fichero 4289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4289;

Registro4289 crear_registro4289(int id) {
    Registro4289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4289(Registro4289 r) {
    return r.valor + r.id;
}
