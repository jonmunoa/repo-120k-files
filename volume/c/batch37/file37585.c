// fichero 37585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37585;

Registro37585 crear_registro37585(int id) {
    Registro37585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37585(Registro37585 r) {
    return r.valor + r.id;
}
