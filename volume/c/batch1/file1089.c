// fichero 1089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1089;

Registro1089 crear_registro1089(int id) {
    Registro1089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1089(Registro1089 r) {
    return r.valor + r.id;
}
