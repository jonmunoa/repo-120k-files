// fichero 37853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37853;

Registro37853 crear_registro37853(int id) {
    Registro37853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37853(Registro37853 r) {
    return r.valor + r.id;
}
