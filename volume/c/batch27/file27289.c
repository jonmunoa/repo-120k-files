// fichero 27289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27289;

Registro27289 crear_registro27289(int id) {
    Registro27289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27289(Registro27289 r) {
    return r.valor + r.id;
}
