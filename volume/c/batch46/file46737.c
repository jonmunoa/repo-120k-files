// fichero 46737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46737;

Registro46737 crear_registro46737(int id) {
    Registro46737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46737(Registro46737 r) {
    return r.valor + r.id;
}
