// fichero 7329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7329;

Registro7329 crear_registro7329(int id) {
    Registro7329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7329(Registro7329 r) {
    return r.valor + r.id;
}
