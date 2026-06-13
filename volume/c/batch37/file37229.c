// fichero 37229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37229;

Registro37229 crear_registro37229(int id) {
    Registro37229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37229(Registro37229 r) {
    return r.valor + r.id;
}
