// fichero 52869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52869;

Registro52869 crear_registro52869(int id) {
    Registro52869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52869(Registro52869 r) {
    return r.valor + r.id;
}
