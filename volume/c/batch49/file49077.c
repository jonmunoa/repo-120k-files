// fichero 49077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49077;

Registro49077 crear_registro49077(int id) {
    Registro49077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49077(Registro49077 r) {
    return r.valor + r.id;
}
