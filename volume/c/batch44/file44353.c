// fichero 44353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44353;

Registro44353 crear_registro44353(int id) {
    Registro44353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44353(Registro44353 r) {
    return r.valor + r.id;
}
