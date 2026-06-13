// fichero 31809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31809;

Registro31809 crear_registro31809(int id) {
    Registro31809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31809(Registro31809 r) {
    return r.valor + r.id;
}
