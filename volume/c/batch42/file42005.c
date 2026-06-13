// fichero 42005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42005;

Registro42005 crear_registro42005(int id) {
    Registro42005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42005(Registro42005 r) {
    return r.valor + r.id;
}
