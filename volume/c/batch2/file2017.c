// fichero 2017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2017;

Registro2017 crear_registro2017(int id) {
    Registro2017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2017(Registro2017 r) {
    return r.valor + r.id;
}
