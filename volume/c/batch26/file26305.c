// fichero 26305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26305;

Registro26305 crear_registro26305(int id) {
    Registro26305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26305(Registro26305 r) {
    return r.valor + r.id;
}
