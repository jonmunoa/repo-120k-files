// fichero 53185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53185;

Registro53185 crear_registro53185(int id) {
    Registro53185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53185(Registro53185 r) {
    return r.valor + r.id;
}
