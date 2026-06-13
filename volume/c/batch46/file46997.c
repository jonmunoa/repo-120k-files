// fichero 46997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46997;

Registro46997 crear_registro46997(int id) {
    Registro46997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46997(Registro46997 r) {
    return r.valor + r.id;
}
