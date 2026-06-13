// fichero 13333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13333;

Registro13333 crear_registro13333(int id) {
    Registro13333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13333(Registro13333 r) {
    return r.valor + r.id;
}
