// fichero 11349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11349;

Registro11349 crear_registro11349(int id) {
    Registro11349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11349(Registro11349 r) {
    return r.valor + r.id;
}
