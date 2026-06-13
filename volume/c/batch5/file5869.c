// fichero 5869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5869;

Registro5869 crear_registro5869(int id) {
    Registro5869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5869(Registro5869 r) {
    return r.valor + r.id;
}
