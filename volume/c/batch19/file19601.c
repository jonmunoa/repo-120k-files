// fichero 19601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19601;

Registro19601 crear_registro19601(int id) {
    Registro19601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19601(Registro19601 r) {
    return r.valor + r.id;
}
