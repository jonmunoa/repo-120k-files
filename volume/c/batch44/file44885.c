// fichero 44885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44885;

Registro44885 crear_registro44885(int id) {
    Registro44885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44885(Registro44885 r) {
    return r.valor + r.id;
}
