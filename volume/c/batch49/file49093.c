// fichero 49093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49093;

Registro49093 crear_registro49093(int id) {
    Registro49093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49093(Registro49093 r) {
    return r.valor + r.id;
}
