// fichero 49733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49733;

Registro49733 crear_registro49733(int id) {
    Registro49733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49733(Registro49733 r) {
    return r.valor + r.id;
}
