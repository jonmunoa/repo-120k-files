// fichero 48173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48173;

Registro48173 crear_registro48173(int id) {
    Registro48173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48173(Registro48173 r) {
    return r.valor + r.id;
}
