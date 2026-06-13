// fichero 31677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31677;

Registro31677 crear_registro31677(int id) {
    Registro31677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31677(Registro31677 r) {
    return r.valor + r.id;
}
