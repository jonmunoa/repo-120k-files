// fichero 13353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13353;

Registro13353 crear_registro13353(int id) {
    Registro13353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13353(Registro13353 r) {
    return r.valor + r.id;
}
