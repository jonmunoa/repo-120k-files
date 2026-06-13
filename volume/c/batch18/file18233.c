// fichero 18233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18233;

Registro18233 crear_registro18233(int id) {
    Registro18233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18233(Registro18233 r) {
    return r.valor + r.id;
}
