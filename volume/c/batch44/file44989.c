// fichero 44989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44989;

Registro44989 crear_registro44989(int id) {
    Registro44989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44989(Registro44989 r) {
    return r.valor + r.id;
}
