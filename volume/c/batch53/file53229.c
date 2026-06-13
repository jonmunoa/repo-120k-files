// fichero 53229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53229;

Registro53229 crear_registro53229(int id) {
    Registro53229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53229(Registro53229 r) {
    return r.valor + r.id;
}
