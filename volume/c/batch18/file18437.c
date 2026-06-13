// fichero 18437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18437;

Registro18437 crear_registro18437(int id) {
    Registro18437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18437(Registro18437 r) {
    return r.valor + r.id;
}
