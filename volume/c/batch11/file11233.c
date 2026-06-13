// fichero 11233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11233;

Registro11233 crear_registro11233(int id) {
    Registro11233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11233(Registro11233 r) {
    return r.valor + r.id;
}
