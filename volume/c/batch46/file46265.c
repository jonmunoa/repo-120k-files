// fichero 46265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46265;

Registro46265 crear_registro46265(int id) {
    Registro46265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46265(Registro46265 r) {
    return r.valor + r.id;
}
