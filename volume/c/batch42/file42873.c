// fichero 42873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42873;

Registro42873 crear_registro42873(int id) {
    Registro42873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42873(Registro42873 r) {
    return r.valor + r.id;
}
