// fichero 16229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16229;

Registro16229 crear_registro16229(int id) {
    Registro16229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16229(Registro16229 r) {
    return r.valor + r.id;
}
