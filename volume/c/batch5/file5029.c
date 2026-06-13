// fichero 5029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5029;

Registro5029 crear_registro5029(int id) {
    Registro5029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5029(Registro5029 r) {
    return r.valor + r.id;
}
