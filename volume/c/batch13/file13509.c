// fichero 13509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13509;

Registro13509 crear_registro13509(int id) {
    Registro13509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13509(Registro13509 r) {
    return r.valor + r.id;
}
