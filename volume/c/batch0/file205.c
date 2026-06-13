// fichero 205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro205;

Registro205 crear_registro205(int id) {
    Registro205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro205(Registro205 r) {
    return r.valor + r.id;
}
