// fichero 7613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7613;

Registro7613 crear_registro7613(int id) {
    Registro7613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7613(Registro7613 r) {
    return r.valor + r.id;
}
