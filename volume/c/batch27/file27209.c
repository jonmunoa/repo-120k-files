// fichero 27209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27209;

Registro27209 crear_registro27209(int id) {
    Registro27209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27209(Registro27209 r) {
    return r.valor + r.id;
}
