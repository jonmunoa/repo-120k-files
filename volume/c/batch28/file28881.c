// fichero 28881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28881;

Registro28881 crear_registro28881(int id) {
    Registro28881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28881(Registro28881 r) {
    return r.valor + r.id;
}
