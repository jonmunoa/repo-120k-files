// fichero 47841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47841;

Registro47841 crear_registro47841(int id) {
    Registro47841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47841(Registro47841 r) {
    return r.valor + r.id;
}
