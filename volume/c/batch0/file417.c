// fichero 417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro417;

Registro417 crear_registro417(int id) {
    Registro417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro417(Registro417 r) {
    return r.valor + r.id;
}
