// fichero 14625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14625;

Registro14625 crear_registro14625(int id) {
    Registro14625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14625(Registro14625 r) {
    return r.valor + r.id;
}
