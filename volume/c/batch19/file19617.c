// fichero 19617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19617;

Registro19617 crear_registro19617(int id) {
    Registro19617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19617(Registro19617 r) {
    return r.valor + r.id;
}
