// fichero 28857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28857;

Registro28857 crear_registro28857(int id) {
    Registro28857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28857(Registro28857 r) {
    return r.valor + r.id;
}
