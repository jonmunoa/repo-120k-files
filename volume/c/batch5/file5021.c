// fichero 5021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5021;

Registro5021 crear_registro5021(int id) {
    Registro5021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5021(Registro5021 r) {
    return r.valor + r.id;
}
