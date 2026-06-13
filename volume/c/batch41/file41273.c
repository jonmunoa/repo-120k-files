// fichero 41273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41273;

Registro41273 crear_registro41273(int id) {
    Registro41273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41273(Registro41273 r) {
    return r.valor + r.id;
}
