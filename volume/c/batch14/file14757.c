// fichero 14757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14757;

Registro14757 crear_registro14757(int id) {
    Registro14757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14757(Registro14757 r) {
    return r.valor + r.id;
}
