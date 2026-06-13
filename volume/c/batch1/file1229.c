// fichero 1229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1229;

Registro1229 crear_registro1229(int id) {
    Registro1229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1229(Registro1229 r) {
    return r.valor + r.id;
}
