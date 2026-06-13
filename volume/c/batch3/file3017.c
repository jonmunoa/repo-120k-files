// fichero 3017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3017;

Registro3017 crear_registro3017(int id) {
    Registro3017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3017(Registro3017 r) {
    return r.valor + r.id;
}
