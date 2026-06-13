// fichero 43837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43837;

Registro43837 crear_registro43837(int id) {
    Registro43837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43837(Registro43837 r) {
    return r.valor + r.id;
}
