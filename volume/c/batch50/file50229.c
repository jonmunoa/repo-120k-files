// fichero 50229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50229;

Registro50229 crear_registro50229(int id) {
    Registro50229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50229(Registro50229 r) {
    return r.valor + r.id;
}
