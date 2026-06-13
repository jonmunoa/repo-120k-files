// fichero 26109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26109;

Registro26109 crear_registro26109(int id) {
    Registro26109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26109(Registro26109 r) {
    return r.valor + r.id;
}
