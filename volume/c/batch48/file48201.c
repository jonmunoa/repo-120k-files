// fichero 48201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48201;

Registro48201 crear_registro48201(int id) {
    Registro48201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48201(Registro48201 r) {
    return r.valor + r.id;
}
