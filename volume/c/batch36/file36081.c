// fichero 36081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36081;

Registro36081 crear_registro36081(int id) {
    Registro36081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36081(Registro36081 r) {
    return r.valor + r.id;
}
