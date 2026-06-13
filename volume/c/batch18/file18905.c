// fichero 18905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18905;

Registro18905 crear_registro18905(int id) {
    Registro18905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18905(Registro18905 r) {
    return r.valor + r.id;
}
