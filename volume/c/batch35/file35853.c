// fichero 35853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35853;

Registro35853 crear_registro35853(int id) {
    Registro35853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35853(Registro35853 r) {
    return r.valor + r.id;
}
