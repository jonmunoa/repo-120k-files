// fichero 7861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7861;

Registro7861 crear_registro7861(int id) {
    Registro7861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7861(Registro7861 r) {
    return r.valor + r.id;
}
