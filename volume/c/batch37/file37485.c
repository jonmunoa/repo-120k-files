// fichero 37485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37485;

Registro37485 crear_registro37485(int id) {
    Registro37485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37485(Registro37485 r) {
    return r.valor + r.id;
}
