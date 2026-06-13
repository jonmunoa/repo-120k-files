// fichero 4205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4205;

Registro4205 crear_registro4205(int id) {
    Registro4205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4205(Registro4205 r) {
    return r.valor + r.id;
}
