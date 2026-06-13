// fichero 3857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3857;

Registro3857 crear_registro3857(int id) {
    Registro3857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3857(Registro3857 r) {
    return r.valor + r.id;
}
