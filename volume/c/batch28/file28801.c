// fichero 28801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28801;

Registro28801 crear_registro28801(int id) {
    Registro28801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28801(Registro28801 r) {
    return r.valor + r.id;
}
