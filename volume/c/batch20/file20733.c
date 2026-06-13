// fichero 20733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20733;

Registro20733 crear_registro20733(int id) {
    Registro20733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20733(Registro20733 r) {
    return r.valor + r.id;
}
