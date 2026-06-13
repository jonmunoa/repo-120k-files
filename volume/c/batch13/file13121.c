// fichero 13121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13121;

Registro13121 crear_registro13121(int id) {
    Registro13121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13121(Registro13121 r) {
    return r.valor + r.id;
}
