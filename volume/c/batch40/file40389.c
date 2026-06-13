// fichero 40389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40389;

Registro40389 crear_registro40389(int id) {
    Registro40389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40389(Registro40389 r) {
    return r.valor + r.id;
}
