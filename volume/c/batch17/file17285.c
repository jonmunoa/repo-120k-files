// fichero 17285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17285;

Registro17285 crear_registro17285(int id) {
    Registro17285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17285(Registro17285 r) {
    return r.valor + r.id;
}
