// fichero 24217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24217;

Registro24217 crear_registro24217(int id) {
    Registro24217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24217(Registro24217 r) {
    return r.valor + r.id;
}
