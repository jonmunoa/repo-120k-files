// fichero 48509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48509;

Registro48509 crear_registro48509(int id) {
    Registro48509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48509(Registro48509 r) {
    return r.valor + r.id;
}
