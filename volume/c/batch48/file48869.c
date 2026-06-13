// fichero 48869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48869;

Registro48869 crear_registro48869(int id) {
    Registro48869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48869(Registro48869 r) {
    return r.valor + r.id;
}
