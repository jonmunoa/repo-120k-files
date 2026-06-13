// fichero 5737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5737;

Registro5737 crear_registro5737(int id) {
    Registro5737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5737(Registro5737 r) {
    return r.valor + r.id;
}
