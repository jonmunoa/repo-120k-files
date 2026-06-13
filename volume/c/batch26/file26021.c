// fichero 26021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26021;

Registro26021 crear_registro26021(int id) {
    Registro26021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26021(Registro26021 r) {
    return r.valor + r.id;
}
