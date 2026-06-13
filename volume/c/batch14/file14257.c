// fichero 14257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14257;

Registro14257 crear_registro14257(int id) {
    Registro14257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14257(Registro14257 r) {
    return r.valor + r.id;
}
