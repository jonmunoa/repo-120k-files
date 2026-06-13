// fichero 44845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44845;

Registro44845 crear_registro44845(int id) {
    Registro44845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44845(Registro44845 r) {
    return r.valor + r.id;
}
