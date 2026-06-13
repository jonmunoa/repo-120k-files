// fichero 18409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18409;

Registro18409 crear_registro18409(int id) {
    Registro18409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18409(Registro18409 r) {
    return r.valor + r.id;
}
