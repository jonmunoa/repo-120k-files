// fichero 17809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17809;

Registro17809 crear_registro17809(int id) {
    Registro17809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17809(Registro17809 r) {
    return r.valor + r.id;
}
