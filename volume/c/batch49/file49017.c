// fichero 49017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49017;

Registro49017 crear_registro49017(int id) {
    Registro49017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49017(Registro49017 r) {
    return r.valor + r.id;
}
