// fichero 33753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33753;

Registro33753 crear_registro33753(int id) {
    Registro33753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33753(Registro33753 r) {
    return r.valor + r.id;
}
