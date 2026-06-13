// fichero 37165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37165;

Registro37165 crear_registro37165(int id) {
    Registro37165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37165(Registro37165 r) {
    return r.valor + r.id;
}
