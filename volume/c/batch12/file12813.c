// fichero 12813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12813;

Registro12813 crear_registro12813(int id) {
    Registro12813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12813(Registro12813 r) {
    return r.valor + r.id;
}
