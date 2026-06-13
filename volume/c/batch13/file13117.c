// fichero 13117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13117;

Registro13117 crear_registro13117(int id) {
    Registro13117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13117(Registro13117 r) {
    return r.valor + r.id;
}
