// fichero 3805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3805;

Registro3805 crear_registro3805(int id) {
    Registro3805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3805(Registro3805 r) {
    return r.valor + r.id;
}
