// fichero 46145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46145;

Registro46145 crear_registro46145(int id) {
    Registro46145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46145(Registro46145 r) {
    return r.valor + r.id;
}
