// fichero 37289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37289;

Registro37289 crear_registro37289(int id) {
    Registro37289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37289(Registro37289 r) {
    return r.valor + r.id;
}
