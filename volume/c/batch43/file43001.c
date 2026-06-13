// fichero 43001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43001;

Registro43001 crear_registro43001(int id) {
    Registro43001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43001(Registro43001 r) {
    return r.valor + r.id;
}
