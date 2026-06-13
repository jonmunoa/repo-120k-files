// fichero 46809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46809;

Registro46809 crear_registro46809(int id) {
    Registro46809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46809(Registro46809 r) {
    return r.valor + r.id;
}
