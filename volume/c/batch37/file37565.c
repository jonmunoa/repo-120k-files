// fichero 37565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37565;

Registro37565 crear_registro37565(int id) {
    Registro37565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37565(Registro37565 r) {
    return r.valor + r.id;
}
