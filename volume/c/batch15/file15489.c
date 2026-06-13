// fichero 15489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15489;

Registro15489 crear_registro15489(int id) {
    Registro15489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15489(Registro15489 r) {
    return r.valor + r.id;
}
