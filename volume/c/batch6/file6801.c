// fichero 6801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6801;

Registro6801 crear_registro6801(int id) {
    Registro6801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6801(Registro6801 r) {
    return r.valor + r.id;
}
