// fichero 14737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14737;

Registro14737 crear_registro14737(int id) {
    Registro14737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14737(Registro14737 r) {
    return r.valor + r.id;
}
