// fichero 18501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18501;

Registro18501 crear_registro18501(int id) {
    Registro18501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18501(Registro18501 r) {
    return r.valor + r.id;
}
