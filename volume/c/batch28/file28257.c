// fichero 28257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28257;

Registro28257 crear_registro28257(int id) {
    Registro28257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28257(Registro28257 r) {
    return r.valor + r.id;
}
