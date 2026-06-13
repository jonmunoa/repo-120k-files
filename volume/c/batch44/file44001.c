// fichero 44001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44001;

Registro44001 crear_registro44001(int id) {
    Registro44001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44001(Registro44001 r) {
    return r.valor + r.id;
}
