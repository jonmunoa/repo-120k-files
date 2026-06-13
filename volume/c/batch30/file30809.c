// fichero 30809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30809;

Registro30809 crear_registro30809(int id) {
    Registro30809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30809(Registro30809 r) {
    return r.valor + r.id;
}
