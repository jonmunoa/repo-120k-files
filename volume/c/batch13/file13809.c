// fichero 13809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13809;

Registro13809 crear_registro13809(int id) {
    Registro13809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13809(Registro13809 r) {
    return r.valor + r.id;
}
