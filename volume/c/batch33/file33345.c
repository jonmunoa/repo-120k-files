// fichero 33345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33345;

Registro33345 crear_registro33345(int id) {
    Registro33345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33345(Registro33345 r) {
    return r.valor + r.id;
}
