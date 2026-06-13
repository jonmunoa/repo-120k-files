// fichero 16809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16809;

Registro16809 crear_registro16809(int id) {
    Registro16809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16809(Registro16809 r) {
    return r.valor + r.id;
}
