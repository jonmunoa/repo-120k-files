// fichero 4445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4445;

Registro4445 crear_registro4445(int id) {
    Registro4445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4445(Registro4445 r) {
    return r.valor + r.id;
}
