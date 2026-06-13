// fichero 17197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17197;

Registro17197 crear_registro17197(int id) {
    Registro17197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17197(Registro17197 r) {
    return r.valor + r.id;
}
