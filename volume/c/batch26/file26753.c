// fichero 26753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26753;

Registro26753 crear_registro26753(int id) {
    Registro26753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26753(Registro26753 r) {
    return r.valor + r.id;
}
