// fichero 32917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32917;

Registro32917 crear_registro32917(int id) {
    Registro32917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32917(Registro32917 r) {
    return r.valor + r.id;
}
