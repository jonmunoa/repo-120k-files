// fichero 3329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3329;

Registro3329 crear_registro3329(int id) {
    Registro3329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3329(Registro3329 r) {
    return r.valor + r.id;
}
