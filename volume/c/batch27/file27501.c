// fichero 27501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27501;

Registro27501 crear_registro27501(int id) {
    Registro27501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27501(Registro27501 r) {
    return r.valor + r.id;
}
