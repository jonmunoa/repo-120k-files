// fichero 21229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21229;

Registro21229 crear_registro21229(int id) {
    Registro21229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21229(Registro21229 r) {
    return r.valor + r.id;
}
