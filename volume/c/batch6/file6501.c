// fichero 6501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6501;

Registro6501 crear_registro6501(int id) {
    Registro6501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6501(Registro6501 r) {
    return r.valor + r.id;
}
