// fichero 41373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41373;

Registro41373 crear_registro41373(int id) {
    Registro41373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41373(Registro41373 r) {
    return r.valor + r.id;
}
