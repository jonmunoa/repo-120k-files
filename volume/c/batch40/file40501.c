// fichero 40501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40501;

Registro40501 crear_registro40501(int id) {
    Registro40501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40501(Registro40501 r) {
    return r.valor + r.id;
}
