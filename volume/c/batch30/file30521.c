// fichero 30521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30521;

Registro30521 crear_registro30521(int id) {
    Registro30521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30521(Registro30521 r) {
    return r.valor + r.id;
}
