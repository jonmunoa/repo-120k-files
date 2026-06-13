// fichero 4869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4869;

Registro4869 crear_registro4869(int id) {
    Registro4869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4869(Registro4869 r) {
    return r.valor + r.id;
}
