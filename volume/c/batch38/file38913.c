// fichero 38913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38913;

Registro38913 crear_registro38913(int id) {
    Registro38913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38913(Registro38913 r) {
    return r.valor + r.id;
}
