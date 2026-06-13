// fichero 32613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32613;

Registro32613 crear_registro32613(int id) {
    Registro32613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32613(Registro32613 r) {
    return r.valor + r.id;
}
