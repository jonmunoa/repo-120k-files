// fichero 14077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14077;

Registro14077 crear_registro14077(int id) {
    Registro14077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14077(Registro14077 r) {
    return r.valor + r.id;
}
