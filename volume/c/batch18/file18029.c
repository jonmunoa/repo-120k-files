// fichero 18029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18029;

Registro18029 crear_registro18029(int id) {
    Registro18029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18029(Registro18029 r) {
    return r.valor + r.id;
}
