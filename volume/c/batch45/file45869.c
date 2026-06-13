// fichero 45869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45869;

Registro45869 crear_registro45869(int id) {
    Registro45869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45869(Registro45869 r) {
    return r.valor + r.id;
}
