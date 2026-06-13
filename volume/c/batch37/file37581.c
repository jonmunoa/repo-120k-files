// fichero 37581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37581;

Registro37581 crear_registro37581(int id) {
    Registro37581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37581(Registro37581 r) {
    return r.valor + r.id;
}
