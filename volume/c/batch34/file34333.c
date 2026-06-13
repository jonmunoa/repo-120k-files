// fichero 34333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34333;

Registro34333 crear_registro34333(int id) {
    Registro34333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34333(Registro34333 r) {
    return r.valor + r.id;
}
