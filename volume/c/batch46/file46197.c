// fichero 46197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46197;

Registro46197 crear_registro46197(int id) {
    Registro46197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46197(Registro46197 r) {
    return r.valor + r.id;
}
