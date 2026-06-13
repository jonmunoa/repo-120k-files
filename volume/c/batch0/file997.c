// fichero 997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro997;

Registro997 crear_registro997(int id) {
    Registro997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro997(Registro997 r) {
    return r.valor + r.id;
}
