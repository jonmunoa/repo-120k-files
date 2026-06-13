// fichero 41765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41765;

Registro41765 crear_registro41765(int id) {
    Registro41765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41765(Registro41765 r) {
    return r.valor + r.id;
}
