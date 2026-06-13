// fichero 12997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12997;

Registro12997 crear_registro12997(int id) {
    Registro12997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12997(Registro12997 r) {
    return r.valor + r.id;
}
