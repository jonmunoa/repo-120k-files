// fichero 37513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37513;

Registro37513 crear_registro37513(int id) {
    Registro37513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37513(Registro37513 r) {
    return r.valor + r.id;
}
