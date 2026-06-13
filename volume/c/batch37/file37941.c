// fichero 37941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37941;

Registro37941 crear_registro37941(int id) {
    Registro37941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37941(Registro37941 r) {
    return r.valor + r.id;
}
