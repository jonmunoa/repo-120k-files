// fichero 26617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26617;

Registro26617 crear_registro26617(int id) {
    Registro26617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26617(Registro26617 r) {
    return r.valor + r.id;
}
