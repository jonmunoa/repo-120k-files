// fichero 17989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17989;

Registro17989 crear_registro17989(int id) {
    Registro17989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17989(Registro17989 r) {
    return r.valor + r.id;
}
