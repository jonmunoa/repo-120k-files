// fichero 33985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33985;

Registro33985 crear_registro33985(int id) {
    Registro33985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33985(Registro33985 r) {
    return r.valor + r.id;
}
