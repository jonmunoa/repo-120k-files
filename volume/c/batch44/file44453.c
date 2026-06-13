// fichero 44453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44453;

Registro44453 crear_registro44453(int id) {
    Registro44453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44453(Registro44453 r) {
    return r.valor + r.id;
}
