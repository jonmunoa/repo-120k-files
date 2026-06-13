// fichero 14125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14125;

Registro14125 crear_registro14125(int id) {
    Registro14125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14125(Registro14125 r) {
    return r.valor + r.id;
}
