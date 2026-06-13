// fichero 47649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47649;

Registro47649 crear_registro47649(int id) {
    Registro47649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47649(Registro47649 r) {
    return r.valor + r.id;
}
