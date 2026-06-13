// fichero 28081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28081;

Registro28081 crear_registro28081(int id) {
    Registro28081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28081(Registro28081 r) {
    return r.valor + r.id;
}
