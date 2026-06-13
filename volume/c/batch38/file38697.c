// fichero 38697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38697;

Registro38697 crear_registro38697(int id) {
    Registro38697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38697(Registro38697 r) {
    return r.valor + r.id;
}
