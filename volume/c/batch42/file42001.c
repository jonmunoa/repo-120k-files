// fichero 42001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42001;

Registro42001 crear_registro42001(int id) {
    Registro42001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42001(Registro42001 r) {
    return r.valor + r.id;
}
