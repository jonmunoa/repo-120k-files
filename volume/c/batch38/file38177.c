// fichero 38177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38177;

Registro38177 crear_registro38177(int id) {
    Registro38177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38177(Registro38177 r) {
    return r.valor + r.id;
}
