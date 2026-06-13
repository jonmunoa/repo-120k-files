// fichero 54981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54981;

Registro54981 crear_registro54981(int id) {
    Registro54981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54981(Registro54981 r) {
    return r.valor + r.id;
}
