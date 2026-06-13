// fichero 29501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29501;

Registro29501 crear_registro29501(int id) {
    Registro29501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29501(Registro29501 r) {
    return r.valor + r.id;
}
