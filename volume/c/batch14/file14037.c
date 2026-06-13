// fichero 14037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14037;

Registro14037 crear_registro14037(int id) {
    Registro14037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14037(Registro14037 r) {
    return r.valor + r.id;
}
