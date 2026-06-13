// fichero 38017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38017;

Registro38017 crear_registro38017(int id) {
    Registro38017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38017(Registro38017 r) {
    return r.valor + r.id;
}
