// fichero 52629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52629;

Registro52629 crear_registro52629(int id) {
    Registro52629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52629(Registro52629 r) {
    return r.valor + r.id;
}
