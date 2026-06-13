// fichero 31501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31501;

Registro31501 crear_registro31501(int id) {
    Registro31501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31501(Registro31501 r) {
    return r.valor + r.id;
}
