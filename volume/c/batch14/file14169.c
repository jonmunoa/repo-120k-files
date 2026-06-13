// fichero 14169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14169;

Registro14169 crear_registro14169(int id) {
    Registro14169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14169(Registro14169 r) {
    return r.valor + r.id;
}
