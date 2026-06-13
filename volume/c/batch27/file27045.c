// fichero 27045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27045;

Registro27045 crear_registro27045(int id) {
    Registro27045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27045(Registro27045 r) {
    return r.valor + r.id;
}
