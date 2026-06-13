// fichero 27113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27113;

Registro27113 crear_registro27113(int id) {
    Registro27113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27113(Registro27113 r) {
    return r.valor + r.id;
}
