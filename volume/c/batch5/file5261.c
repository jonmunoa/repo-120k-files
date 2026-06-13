// fichero 5261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5261;

Registro5261 crear_registro5261(int id) {
    Registro5261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5261(Registro5261 r) {
    return r.valor + r.id;
}
