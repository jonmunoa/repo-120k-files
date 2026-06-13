// fichero 41029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41029;

Registro41029 crear_registro41029(int id) {
    Registro41029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41029(Registro41029 r) {
    return r.valor + r.id;
}
