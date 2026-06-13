// fichero 35089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35089;

Registro35089 crear_registro35089(int id) {
    Registro35089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35089(Registro35089 r) {
    return r.valor + r.id;
}
