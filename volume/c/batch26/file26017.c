// fichero 26017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26017;

Registro26017 crear_registro26017(int id) {
    Registro26017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26017(Registro26017 r) {
    return r.valor + r.id;
}
