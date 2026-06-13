// fichero 13485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13485;

Registro13485 crear_registro13485(int id) {
    Registro13485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13485(Registro13485 r) {
    return r.valor + r.id;
}
