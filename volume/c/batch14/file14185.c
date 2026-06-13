// fichero 14185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14185;

Registro14185 crear_registro14185(int id) {
    Registro14185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14185(Registro14185 r) {
    return r.valor + r.id;
}
