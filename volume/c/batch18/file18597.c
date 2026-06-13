// fichero 18597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18597;

Registro18597 crear_registro18597(int id) {
    Registro18597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18597(Registro18597 r) {
    return r.valor + r.id;
}
