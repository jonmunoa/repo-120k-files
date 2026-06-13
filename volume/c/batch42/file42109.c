// fichero 42109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42109;

Registro42109 crear_registro42109(int id) {
    Registro42109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42109(Registro42109 r) {
    return r.valor + r.id;
}
