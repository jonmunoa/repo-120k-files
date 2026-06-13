// fichero 40297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40297;

Registro40297 crear_registro40297(int id) {
    Registro40297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40297(Registro40297 r) {
    return r.valor + r.id;
}
