// fichero 501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro501;

Registro501 crear_registro501(int id) {
    Registro501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro501(Registro501 r) {
    return r.valor + r.id;
}
