// fichero 28753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28753;

Registro28753 crear_registro28753(int id) {
    Registro28753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28753(Registro28753 r) {
    return r.valor + r.id;
}
