// fichero 11217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11217;

Registro11217 crear_registro11217(int id) {
    Registro11217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11217(Registro11217 r) {
    return r.valor + r.id;
}
