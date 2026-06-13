// fichero 38837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38837;

Registro38837 crear_registro38837(int id) {
    Registro38837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38837(Registro38837 r) {
    return r.valor + r.id;
}
