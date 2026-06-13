// fichero 24289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24289;

Registro24289 crear_registro24289(int id) {
    Registro24289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24289(Registro24289 r) {
    return r.valor + r.id;
}
