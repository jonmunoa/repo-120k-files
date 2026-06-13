// fichero 3845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3845;

Registro3845 crear_registro3845(int id) {
    Registro3845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3845(Registro3845 r) {
    return r.valor + r.id;
}
