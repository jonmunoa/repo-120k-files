// fichero 6869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6869;

Registro6869 crear_registro6869(int id) {
    Registro6869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6869(Registro6869 r) {
    return r.valor + r.id;
}
