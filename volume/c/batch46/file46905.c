// fichero 46905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46905;

Registro46905 crear_registro46905(int id) {
    Registro46905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46905(Registro46905 r) {
    return r.valor + r.id;
}
