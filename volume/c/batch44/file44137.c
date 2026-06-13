// fichero 44137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44137;

Registro44137 crear_registro44137(int id) {
    Registro44137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44137(Registro44137 r) {
    return r.valor + r.id;
}
