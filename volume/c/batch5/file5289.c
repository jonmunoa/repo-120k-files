// fichero 5289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5289;

Registro5289 crear_registro5289(int id) {
    Registro5289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5289(Registro5289 r) {
    return r.valor + r.id;
}
