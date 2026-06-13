// fichero 13181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13181;

Registro13181 crear_registro13181(int id) {
    Registro13181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13181(Registro13181 r) {
    return r.valor + r.id;
}
