// fichero 185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro185;

Registro185 crear_registro185(int id) {
    Registro185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro185(Registro185 r) {
    return r.valor + r.id;
}
