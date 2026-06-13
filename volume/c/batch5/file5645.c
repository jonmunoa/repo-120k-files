// fichero 5645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5645;

Registro5645 crear_registro5645(int id) {
    Registro5645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5645(Registro5645 r) {
    return r.valor + r.id;
}
