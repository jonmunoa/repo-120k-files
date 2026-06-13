// fichero 24577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24577;

Registro24577 crear_registro24577(int id) {
    Registro24577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24577(Registro24577 r) {
    return r.valor + r.id;
}
