// fichero 14997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14997;

Registro14997 crear_registro14997(int id) {
    Registro14997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14997(Registro14997 r) {
    return r.valor + r.id;
}
