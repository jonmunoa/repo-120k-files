// fichero 5257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5257;

Registro5257 crear_registro5257(int id) {
    Registro5257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5257(Registro5257 r) {
    return r.valor + r.id;
}
