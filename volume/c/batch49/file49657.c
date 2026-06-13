// fichero 49657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49657;

Registro49657 crear_registro49657(int id) {
    Registro49657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49657(Registro49657 r) {
    return r.valor + r.id;
}
