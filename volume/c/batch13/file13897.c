// fichero 13897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13897;

Registro13897 crear_registro13897(int id) {
    Registro13897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13897(Registro13897 r) {
    return r.valor + r.id;
}
