// fichero 14089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14089;

Registro14089 crear_registro14089(int id) {
    Registro14089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14089(Registro14089 r) {
    return r.valor + r.id;
}
