// fichero 37109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37109;

Registro37109 crear_registro37109(int id) {
    Registro37109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37109(Registro37109 r) {
    return r.valor + r.id;
}
