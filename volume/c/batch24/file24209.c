// fichero 24209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24209;

Registro24209 crear_registro24209(int id) {
    Registro24209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24209(Registro24209 r) {
    return r.valor + r.id;
}
