// fichero 27505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27505;

Registro27505 crear_registro27505(int id) {
    Registro27505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27505(Registro27505 r) {
    return r.valor + r.id;
}
