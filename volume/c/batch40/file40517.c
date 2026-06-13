// fichero 40517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40517;

Registro40517 crear_registro40517(int id) {
    Registro40517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40517(Registro40517 r) {
    return r.valor + r.id;
}
