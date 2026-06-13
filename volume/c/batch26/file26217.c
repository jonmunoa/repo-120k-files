// fichero 26217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26217;

Registro26217 crear_registro26217(int id) {
    Registro26217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26217(Registro26217 r) {
    return r.valor + r.id;
}
