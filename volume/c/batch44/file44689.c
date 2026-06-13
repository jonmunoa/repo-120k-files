// fichero 44689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44689;

Registro44689 crear_registro44689(int id) {
    Registro44689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44689(Registro44689 r) {
    return r.valor + r.id;
}
