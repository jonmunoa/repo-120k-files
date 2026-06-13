// fichero 44833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44833;

Registro44833 crear_registro44833(int id) {
    Registro44833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44833(Registro44833 r) {
    return r.valor + r.id;
}
