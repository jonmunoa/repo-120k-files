// fichero 19753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19753;

Registro19753 crear_registro19753(int id) {
    Registro19753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19753(Registro19753 r) {
    return r.valor + r.id;
}
