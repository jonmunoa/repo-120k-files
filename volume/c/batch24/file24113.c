// fichero 24113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24113;

Registro24113 crear_registro24113(int id) {
    Registro24113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24113(Registro24113 r) {
    return r.valor + r.id;
}
