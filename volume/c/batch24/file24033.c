// fichero 24033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24033;

Registro24033 crear_registro24033(int id) {
    Registro24033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24033(Registro24033 r) {
    return r.valor + r.id;
}
