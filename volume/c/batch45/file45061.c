// fichero 45061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45061;

Registro45061 crear_registro45061(int id) {
    Registro45061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45061(Registro45061 r) {
    return r.valor + r.id;
}
