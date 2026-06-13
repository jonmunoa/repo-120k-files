// fichero 44045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44045;

Registro44045 crear_registro44045(int id) {
    Registro44045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44045(Registro44045 r) {
    return r.valor + r.id;
}
