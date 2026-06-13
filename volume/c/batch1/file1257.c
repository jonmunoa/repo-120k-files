// fichero 1257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1257;

Registro1257 crear_registro1257(int id) {
    Registro1257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1257(Registro1257 r) {
    return r.valor + r.id;
}
