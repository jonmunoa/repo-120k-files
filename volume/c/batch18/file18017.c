// fichero 18017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18017;

Registro18017 crear_registro18017(int id) {
    Registro18017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18017(Registro18017 r) {
    return r.valor + r.id;
}
