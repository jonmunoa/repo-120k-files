// fichero 7029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7029;

Registro7029 crear_registro7029(int id) {
    Registro7029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7029(Registro7029 r) {
    return r.valor + r.id;
}
