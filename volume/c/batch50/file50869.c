// fichero 50869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50869;

Registro50869 crear_registro50869(int id) {
    Registro50869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50869(Registro50869 r) {
    return r.valor + r.id;
}
