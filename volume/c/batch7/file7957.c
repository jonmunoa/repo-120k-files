// fichero 7957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7957;

Registro7957 crear_registro7957(int id) {
    Registro7957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7957(Registro7957 r) {
    return r.valor + r.id;
}
