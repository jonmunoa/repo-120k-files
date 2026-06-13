// fichero 5157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5157;

Registro5157 crear_registro5157(int id) {
    Registro5157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5157(Registro5157 r) {
    return r.valor + r.id;
}
