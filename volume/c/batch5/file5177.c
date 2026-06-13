// fichero 5177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5177;

Registro5177 crear_registro5177(int id) {
    Registro5177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5177(Registro5177 r) {
    return r.valor + r.id;
}
