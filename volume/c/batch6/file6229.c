// fichero 6229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6229;

Registro6229 crear_registro6229(int id) {
    Registro6229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6229(Registro6229 r) {
    return r.valor + r.id;
}
