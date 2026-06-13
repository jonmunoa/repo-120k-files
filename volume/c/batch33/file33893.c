// fichero 33893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33893;

Registro33893 crear_registro33893(int id) {
    Registro33893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33893(Registro33893 r) {
    return r.valor + r.id;
}
