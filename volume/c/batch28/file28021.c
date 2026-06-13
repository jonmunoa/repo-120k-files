// fichero 28021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28021;

Registro28021 crear_registro28021(int id) {
    Registro28021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28021(Registro28021 r) {
    return r.valor + r.id;
}
