// fichero 46001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46001;

Registro46001 crear_registro46001(int id) {
    Registro46001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46001(Registro46001 r) {
    return r.valor + r.id;
}
