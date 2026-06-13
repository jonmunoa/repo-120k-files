// fichero 38365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38365;

Registro38365 crear_registro38365(int id) {
    Registro38365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38365(Registro38365 r) {
    return r.valor + r.id;
}
