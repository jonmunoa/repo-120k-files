// fichero 44173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44173;

Registro44173 crear_registro44173(int id) {
    Registro44173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44173(Registro44173 r) {
    return r.valor + r.id;
}
