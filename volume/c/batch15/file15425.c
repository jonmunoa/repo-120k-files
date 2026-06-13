// fichero 15425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15425;

Registro15425 crear_registro15425(int id) {
    Registro15425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15425(Registro15425 r) {
    return r.valor + r.id;
}
