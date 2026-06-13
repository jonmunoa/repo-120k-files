// fichero 31517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31517;

Registro31517 crear_registro31517(int id) {
    Registro31517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31517(Registro31517 r) {
    return r.valor + r.id;
}
