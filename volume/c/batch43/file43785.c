// fichero 43785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43785;

Registro43785 crear_registro43785(int id) {
    Registro43785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43785(Registro43785 r) {
    return r.valor + r.id;
}
