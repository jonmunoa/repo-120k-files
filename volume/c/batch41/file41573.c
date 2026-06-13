// fichero 41573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41573;

Registro41573 crear_registro41573(int id) {
    Registro41573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41573(Registro41573 r) {
    return r.valor + r.id;
}
