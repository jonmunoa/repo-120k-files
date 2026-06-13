// fichero 4809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4809;

Registro4809 crear_registro4809(int id) {
    Registro4809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4809(Registro4809 r) {
    return r.valor + r.id;
}
