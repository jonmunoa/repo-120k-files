// fichero 35225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35225;

Registro35225 crear_registro35225(int id) {
    Registro35225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35225(Registro35225 r) {
    return r.valor + r.id;
}
