// fichero 173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro173;

Registro173 crear_registro173(int id) {
    Registro173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro173(Registro173 r) {
    return r.valor + r.id;
}
