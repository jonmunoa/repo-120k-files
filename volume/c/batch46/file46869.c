// fichero 46869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46869;

Registro46869 crear_registro46869(int id) {
    Registro46869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46869(Registro46869 r) {
    return r.valor + r.id;
}
