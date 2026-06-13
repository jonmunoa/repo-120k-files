// fichero 6285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6285;

Registro6285 crear_registro6285(int id) {
    Registro6285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6285(Registro6285 r) {
    return r.valor + r.id;
}
