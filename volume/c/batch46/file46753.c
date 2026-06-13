// fichero 46753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46753;

Registro46753 crear_registro46753(int id) {
    Registro46753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46753(Registro46753 r) {
    return r.valor + r.id;
}
