// fichero 52029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52029;

Registro52029 crear_registro52029(int id) {
    Registro52029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52029(Registro52029 r) {
    return r.valor + r.id;
}
