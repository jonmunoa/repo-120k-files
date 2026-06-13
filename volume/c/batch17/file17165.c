// fichero 17165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17165;

Registro17165 crear_registro17165(int id) {
    Registro17165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17165(Registro17165 r) {
    return r.valor + r.id;
}
