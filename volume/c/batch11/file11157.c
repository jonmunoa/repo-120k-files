// fichero 11157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11157;

Registro11157 crear_registro11157(int id) {
    Registro11157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11157(Registro11157 r) {
    return r.valor + r.id;
}
