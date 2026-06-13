// fichero 38581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38581;

Registro38581 crear_registro38581(int id) {
    Registro38581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38581(Registro38581 r) {
    return r.valor + r.id;
}
