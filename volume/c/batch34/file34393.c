// fichero 34393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34393;

Registro34393 crear_registro34393(int id) {
    Registro34393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34393(Registro34393 r) {
    return r.valor + r.id;
}
