// fichero 38081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38081;

Registro38081 crear_registro38081(int id) {
    Registro38081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38081(Registro38081 r) {
    return r.valor + r.id;
}
