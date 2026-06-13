// fichero 44325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44325;

Registro44325 crear_registro44325(int id) {
    Registro44325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44325(Registro44325 r) {
    return r.valor + r.id;
}
