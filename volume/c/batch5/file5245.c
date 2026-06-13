// fichero 5245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5245;

Registro5245 crear_registro5245(int id) {
    Registro5245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5245(Registro5245 r) {
    return r.valor + r.id;
}
